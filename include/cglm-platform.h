/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglm_platform_h
#define cglm_platform_h

#ifdef __APPLE__
#  include <OpenGL/gl3.h>
#else
#  ifdef _WIN32
#    define WIN32_LEAN_AND_MEAN
#    include <windows.h>
#  endif
#  include <GL/gl.h>
#endif

#ifdef _WIN32
extern
void
glUniformMatrix4fv(GLint location,
                   GLsizei count,
                   GLboolean transpose,
                   const GLfloat *value);
#endif

#endif /* cglm_platform_h */
