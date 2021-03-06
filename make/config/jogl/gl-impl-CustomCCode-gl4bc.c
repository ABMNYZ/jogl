/*   Java->C glue code:
 *   Java package: jogamp.opengl.gl4.GL4bcImpl
 *    Java method: void dispatch_glBufferData(int target, long size, java.nio.Buffer data, int usage)
 *     C function: void glBufferData(GLenum target, GLsizeiptr size, const GLvoid *  data, GLenum usage);
 */
JNIEXPORT void JNICALL
Java_jogamp_opengl_gl4_GL4bcImpl_dispatch_1glBufferData(JNIEnv *env, jobject _unused, jint target, jlong size, jobject data, jint data_byte_offset, jboolean data_is_nio, jint usage, jlong procAddress) {
  typedef void (APIENTRY*_local_PFNGLBUFFERDATAPROC)(GLenum target, GLsizeiptr size, const GLvoid *  data, GLenum usage);
  _local_PFNGLBUFFERDATAPROC ptr_glBufferData;
  GLvoid * _data_ptr = NULL;
  if ( NULL != data ) {
    _data_ptr = (GLvoid *) ( JNI_TRUE == data_is_nio ?  (*env)->GetDirectBufferAddress(env, data) :  (*env)->GetPrimitiveArrayCritical(env, data, NULL) );  }
  ptr_glBufferData = (_local_PFNGLBUFFERDATAPROC) (intptr_t) procAddress;
  assert(ptr_glBufferData != NULL);
  (* ptr_glBufferData) ((GLenum) target, (GLsizeiptr) size, (GLvoid *) (((char *) _data_ptr) + data_byte_offset), (GLenum) usage);
  if ( JNI_FALSE == data_is_nio && NULL != data ) {
    (*env)->ReleasePrimitiveArrayCritical(env, data, _data_ptr, JNI_ABORT);  }
}

/** FIXME Add for OpenGL 4.4: glBufferStorage */

/*   Java->C glue code:
 *   Java package: jogamp.opengl.gl4.GL4bcImpl
 *    Java method: void dispatch_glNamedBufferDataEXT(int buffer, long size, java.nio.Buffer data, int usage)
 *     C function: void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const GLvoid *  data, GLenum usage);
 */
JNIEXPORT void JNICALL
Java_jogamp_opengl_gl4_GL4bcImpl_dispatch_1glNamedBufferDataEXT(JNIEnv *env, jobject _unused, jint buffer, jlong size, jobject data, jint data_byte_offset, jboolean data_is_nio, jint usage, jlong procAddress) {
  typedef void (APIENTRY*_local_PFNGLNAMEDBUFFERDATAEXTPROC)(GLuint buffer, GLsizeiptr size, const GLvoid *  data, GLenum usage);
  _local_PFNGLNAMEDBUFFERDATAEXTPROC ptr_glNamedBufferDataEXT;
  GLvoid * _data_ptr = NULL;
  if ( NULL != data ) {
    _data_ptr = (GLvoid *) ( JNI_TRUE == data_is_nio ?  (*env)->GetDirectBufferAddress(env, data) :  (*env)->GetPrimitiveArrayCritical(env, data, NULL) );  }
  ptr_glNamedBufferDataEXT = (_local_PFNGLNAMEDBUFFERDATAEXTPROC) (intptr_t) procAddress;
  assert(ptr_glNamedBufferDataEXT != NULL);
  (* ptr_glNamedBufferDataEXT) ((GLuint) buffer, (GLsizeiptr) size, (GLvoid *) (((char *) _data_ptr) + data_byte_offset), (GLenum) usage);
  if ( JNI_FALSE == data_is_nio && NULL != data ) {
    (*env)->ReleasePrimitiveArrayCritical(env, data, _data_ptr, JNI_ABORT);  }
}

/*   Java->C glue code:
 *   Java package: jogamp.opengl.gl4.GL4bcImpl
 *    Java method: boolean dispatch_glUnmapBuffer(int target)
 *     C function: GLboolean glUnmapBuffer(GLenum target);
 */
JNIEXPORT jboolean JNICALL
Java_jogamp_opengl_gl4_GL4bcImpl_dispatch_1glUnmapBuffer(JNIEnv *env, jobject _unused, jint target, jlong procAddress) {
  typedef GLboolean (APIENTRY*_local_PFNGLUNMAPBUFFERPROC)(GLenum target);
  _local_PFNGLUNMAPBUFFERPROC ptr_glUnmapBuffer;
  GLboolean _res;
  ptr_glUnmapBuffer = (_local_PFNGLUNMAPBUFFERPROC) (intptr_t) procAddress;
  assert(ptr_glUnmapBuffer != NULL);
  _res = (* ptr_glUnmapBuffer) ((GLenum) target);
  return _res;
}

/*   Java->C glue code:
 *   Java package: jogamp.opengl.gl4.GL4bcImpl
 *    Java method: boolean dispatch_glUnmapNamedBufferEXT(int buffer)
 *     C function: GLboolean glUnmapNamedBufferEXT(GLuint buffer);
 */
JNIEXPORT jboolean JNICALL
Java_jogamp_opengl_gl4_GL4bcImpl_dispatch_1glUnmapNamedBufferEXT(JNIEnv *env, jobject _unused, jint buffer, jlong procAddress) {
  typedef GLboolean (APIENTRY*_local_PFNGLUNMAPNAMEDBUFFEREXTPROC)(GLuint buffer);
  _local_PFNGLUNMAPNAMEDBUFFEREXTPROC ptr_glUnmapNamedBufferEXT;
  GLboolean _res;
  ptr_glUnmapNamedBufferEXT = (_local_PFNGLUNMAPNAMEDBUFFEREXTPROC) (intptr_t) procAddress;
  assert(ptr_glUnmapNamedBufferEXT != NULL);
  _res = (* ptr_glUnmapNamedBufferEXT) ((GLuint) buffer);
  return _res;
}

/*   Java->C glue code:
 *   Java package: jogamp.opengl.gl4.GL4bcImpl *    Java method: long dispatch_glMapBuffer(int target, int access)
 *     C function: void * glMapBuffer(GLenum target, GLenum access);
 */
JNIEXPORT jlong JNICALL 
Java_jogamp_opengl_gl4_GL4bcImpl_dispatch_1glMapBuffer(JNIEnv *env, jobject _unused, jint target, jint access, jlong glProcAddress) {
  PFNGLMAPBUFFERPROC ptr_glMapBuffer;
  void * _res;
  ptr_glMapBuffer = (PFNGLMAPBUFFERPROC) (intptr_t) glProcAddress;
  assert(ptr_glMapBuffer != NULL);
  _res = (* ptr_glMapBuffer) ((GLenum) target, (GLenum) access);
  return (jlong) (intptr_t) _res;
}

/*   Java->C glue code:
 *   Java package: jogamp.opengl.gl4.GL4bcImpl
 *    Java method: java.nio.ByteBuffer dispatch_glMapBufferRange(int target, long offset, long length, int access)
 *     C function: void *  glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
 */
JNIEXPORT jlong JNICALL
Java_jogamp_opengl_gl4_GL4bcImpl_dispatch_1glMapBufferRange(JNIEnv *env, jobject _unused, jint target, jlong offset, jlong length, jint access, jlong procAddress) {
  typedef void *  (APIENTRY*_local_PFNGLMAPBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
  _local_PFNGLMAPBUFFERRANGEPROC ptr_glMapBufferRange;
  void *  _res;
  ptr_glMapBufferRange = (_local_PFNGLMAPBUFFERRANGEPROC) (intptr_t) procAddress;
  assert(ptr_glMapBufferRange != NULL);
  _res = (* ptr_glMapBufferRange) ((GLenum) target, (GLintptr) offset, (GLsizeiptr) length, (GLbitfield) access);
  return (jlong) (intptr_t) _res;
}

/*   Java->C glue code:
 *   Java package: jogamp.opengl.gl4.GL4bcImpl
 *    Java method: long dispatch_glMapNamedBufferEXT(int target, int access)
 *     C function: void * glMapNamedBufferEXT(GLenum target, GLenum access);
 */
JNIEXPORT jlong JNICALL 
Java_jogamp_opengl_gl4_GL4bcImpl_dispatch_1glMapNamedBufferEXT(JNIEnv *env, jobject _unused, jint target, jint access, jlong glProcAddress) {
  PFNGLMAPNAMEDBUFFEREXTPROC ptr_glMapNamedBufferEXT;
  void * _res;
  ptr_glMapNamedBufferEXT = (PFNGLMAPNAMEDBUFFEREXTPROC) (intptr_t) glProcAddress;
  assert(ptr_glMapNamedBufferEXT != NULL);
  _res = (* ptr_glMapNamedBufferEXT) ((GLuint) target, (GLenum) access);
  return (jlong) (intptr_t) _res;
}

/*   Java->C glue code:
 *   Java package: jogamp.opengl.gl4.GL4bcImpl
 *    Java method: java.nio.ByteBuffer dispatch_glMapNamedBufferRangeEXT(int buffer, long offset, long length, int access)
 *     C function: void *  glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
 */
JNIEXPORT jlong JNICALL
Java_jogamp_opengl_gl4_GL4bcImpl_dispatch_1glMapNamedBufferRangeEXT(JNIEnv *env, jobject _unused, jint buffer, jlong offset, jlong length, jint access, jlong procAddress) {
  PFNGLMAPNAMEDBUFFERRANGEEXTPROC ptr_glMapNamedBufferRangeEXT;
  void *  _res;
  ptr_glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC) (intptr_t) procAddress;
  assert(ptr_glMapNamedBufferRangeEXT != NULL);
  _res = (* ptr_glMapNamedBufferRangeEXT) ((GLuint) buffer, (GLintptr) offset, (GLsizeiptr) length, (GLbitfield) access);
  return (jlong) (intptr_t) _res;
}


/*   Java->C glue code:
 *   Java package: jogamp.opengl.gl4.GL4bcImpl
 *    Java method: ByteBuffer newDirectByteBuffer(long addr, long capacity);
 *     C function: jobject newDirectByteBuffer(jlong addr, jlong capacity);
 */
JNIEXPORT jobject JNICALL
Java_jogamp_opengl_gl4_GL4bcImpl_newDirectByteBuffer(JNIEnv *env, jobject _unused, jlong addr, jlong capacity) {
  return (*env)->NewDirectByteBuffer(env, (void*) (intptr_t) addr, capacity);
}
