#ifndef HEADERNAME_DLSYM_IMPORT_H
#define HEADERNAME_DLSYM_IMPORT_H

#include <map>
#include <cstdint>

#include <string>

#include "gl2_import.h"

void* dlsym(const char * symbol){ 

std::map<std::string, void*> function_map = {

{ "glCullFace", (void*)&glCullFace },
{ "glFrontFace", (void*)&glFrontFace },
{ "glHint", (void*)&glHint },
{ "glLineWidth", (void*)&glLineWidth },
{ "glPointSize", (void*)&glPointSize },
{ "glPolygonMode", (void*)&glPolygonMode },
{ "glScissor", (void*)&glScissor },
{ "glTexParameterf", (void*)&glTexParameterf },
{ "glTexParameterfv", (void*)&glTexParameterfv },
{ "glTexParameteri", (void*)&glTexParameteri },
{ "glTexParameteriv", (void*)&glTexParameteriv },
{ "glTexImage1D", (void*)&glTexImage1D },
{ "glTexImage2D", (void*)&glTexImage2D },
{ "glDrawBuffer", (void*)&glDrawBuffer },
{ "glClear", (void*)&glClear },
{ "glClearColor", (void*)&glClearColor },
{ "glClearStencil", (void*)&glClearStencil },
{ "glClearDepth", (void*)&glClearDepth },
{ "glStencilMask", (void*)&glStencilMask },
{ "glColorMask", (void*)&glColorMask },
{ "glDepthMask", (void*)&glDepthMask },
{ "glDisable", (void*)&glDisable },
{ "glEnable", (void*)&glEnable },
{ "glFinish", (void*)&glFinish },
{ "glFlush", (void*)&glFlush },
{ "glBlendFunc", (void*)&glBlendFunc },
{ "glLogicOp", (void*)&glLogicOp },
{ "glStencilFunc", (void*)&glStencilFunc },
{ "glStencilOp", (void*)&glStencilOp },
{ "glDepthFunc", (void*)&glDepthFunc },
{ "glPixelStoref", (void*)&glPixelStoref },
{ "glPixelStorei", (void*)&glPixelStorei },
{ "glReadBuffer", (void*)&glReadBuffer },
{ "glReadPixels", (void*)&glReadPixels },
{ "glGetBooleanv", (void*)&glGetBooleanv },
{ "glGetDoublev", (void*)&glGetDoublev },
{ "glGetError", (void*)&glGetError },
{ "glGetFloatv", (void*)&glGetFloatv },
{ "glGetIntegerv", (void*)&glGetIntegerv },
{ "glGetString", (void*)&glGetString },
{ "glGetTexImage", (void*)&glGetTexImage },
{ "glGetTexParameterfv", (void*)&glGetTexParameterfv },
{ "glGetTexParameteriv", (void*)&glGetTexParameteriv },
{ "glGetTexLevelParameterfv", (void*)&glGetTexLevelParameterfv },
{ "glGetTexLevelParameteriv", (void*)&glGetTexLevelParameteriv },
{ "glIsEnabled", (void*)&glIsEnabled },
{ "glDepthRange", (void*)&glDepthRange },
{ "glViewport", (void*)&glViewport },
{ "glDrawArrays", (void*)&glDrawArrays },
{ "glDrawElements", (void*)&glDrawElements },
{ "glPolygonOffset", (void*)&glPolygonOffset },
{ "glCopyTexImage1D", (void*)&glCopyTexImage1D },
{ "glCopyTexImage2D", (void*)&glCopyTexImage2D },
{ "glCopyTexSubImage1D", (void*)&glCopyTexSubImage1D },
{ "glCopyTexSubImage2D", (void*)&glCopyTexSubImage2D },
{ "glTexSubImage1D", (void*)&glTexSubImage1D },
{ "glTexSubImage2D", (void*)&glTexSubImage2D },
{ "glBindTexture", (void*)&glBindTexture },
{ "glDeleteTextures", (void*)&glDeleteTextures },
{ "glGenTextures", (void*)&glGenTextures },
{ "glIsTexture", (void*)&glIsTexture },
{ "glBlendColor", (void*)&glBlendColor },
{ "glBlendEquation", (void*)&glBlendEquation },
{ "glDrawRangeElements", (void*)&glDrawRangeElements },
{ "glTexImage3D", (void*)&glTexImage3D },
{ "glTexSubImage3D", (void*)&glTexSubImage3D },
{ "glCopyTexSubImage3D", (void*)&glCopyTexSubImage3D },
{ "glActiveTexture", (void*)&glActiveTexture },
{ "glSampleCoverage", (void*)&glSampleCoverage },
{ "glCompressedTexImage3D", (void*)&glCompressedTexImage3D },
{ "glCompressedTexImage2D", (void*)&glCompressedTexImage2D },
{ "glCompressedTexImage1D", (void*)&glCompressedTexImage1D },
{ "glCompressedTexSubImage3D", (void*)&glCompressedTexSubImage3D },
{ "glCompressedTexSubImage2D", (void*)&glCompressedTexSubImage2D },
{ "glCompressedTexSubImage1D", (void*)&glCompressedTexSubImage1D },
{ "glGetCompressedTexImage", (void*)&glGetCompressedTexImage },
{ "glBlendFuncSeparate", (void*)&glBlendFuncSeparate },
{ "glMultiDrawArrays", (void*)&glMultiDrawArrays },
{ "glMultiDrawElements", (void*)&glMultiDrawElements },
{ "glPointParameterf", (void*)&glPointParameterf },
{ "glPointParameterfv", (void*)&glPointParameterfv },
{ "glPointParameteri", (void*)&glPointParameteri },
{ "glPointParameteriv", (void*)&glPointParameteriv },
{ "glGenQueries", (void*)&glGenQueries },
{ "glDeleteQueries", (void*)&glDeleteQueries },
{ "glIsQuery", (void*)&glIsQuery },
{ "glBeginQuery", (void*)&glBeginQuery },
{ "glEndQuery", (void*)&glEndQuery },
{ "glGetQueryiv", (void*)&glGetQueryiv },
{ "glGetQueryObjectiv", (void*)&glGetQueryObjectiv },
{ "glGetQueryObjectuiv", (void*)&glGetQueryObjectuiv },
{ "glBindBuffer", (void*)&glBindBuffer },
{ "glDeleteBuffers", (void*)&glDeleteBuffers },
{ "glGenBuffers", (void*)&glGenBuffers },
{ "glIsBuffer", (void*)&glIsBuffer },
{ "glBufferData", (void*)&glBufferData },
{ "glBufferSubData", (void*)&glBufferSubData },
{ "glGetBufferSubData", (void*)&glGetBufferSubData },
{ "glMapBuffer", (void*)&glMapBuffer },
{ "glUnmapBuffer", (void*)&glUnmapBuffer },
{ "glGetBufferParameteriv", (void*)&glGetBufferParameteriv },
{ "glGetBufferPointerv", (void*)&glGetBufferPointerv },
{ "glBlendEquationSeparate", (void*)&glBlendEquationSeparate },
{ "glDrawBuffers", (void*)&glDrawBuffers },
{ "glStencilOpSeparate", (void*)&glStencilOpSeparate },
{ "glStencilFuncSeparate", (void*)&glStencilFuncSeparate },
{ "glStencilMaskSeparate", (void*)&glStencilMaskSeparate },
{ "glAttachShader", (void*)&glAttachShader },
{ "glBindAttribLocation", (void*)&glBindAttribLocation },
{ "glCompileShader", (void*)&glCompileShader },
{ "glCreateProgram", (void*)&glCreateProgram },
{ "glCreateShader", (void*)&glCreateShader },
{ "glDeleteProgram", (void*)&glDeleteProgram },
{ "glDeleteShader", (void*)&glDeleteShader },
{ "glDetachShader", (void*)&glDetachShader },
{ "glDisableVertexAttribArray", (void*)&glDisableVertexAttribArray },
{ "glEnableVertexAttribArray", (void*)&glEnableVertexAttribArray },
{ "glGetActiveAttrib", (void*)&glGetActiveAttrib },
{ "glGetActiveUniform", (void*)&glGetActiveUniform },
{ "glGetAttachedShaders", (void*)&glGetAttachedShaders },
{ "glGetAttribLocation", (void*)&glGetAttribLocation },
{ "glGetProgramiv", (void*)&glGetProgramiv },
{ "glGetProgramInfoLog", (void*)&glGetProgramInfoLog },
{ "glGetShaderiv", (void*)&glGetShaderiv },
{ "glGetShaderInfoLog", (void*)&glGetShaderInfoLog },
{ "glGetShaderSource", (void*)&glGetShaderSource },
{ "glGetUniformLocation", (void*)&glGetUniformLocation },
{ "glGetUniformfv", (void*)&glGetUniformfv },
{ "glGetUniformiv", (void*)&glGetUniformiv },
{ "glGetVertexAttribdv", (void*)&glGetVertexAttribdv },
{ "glGetVertexAttribfv", (void*)&glGetVertexAttribfv },
{ "glGetVertexAttribiv", (void*)&glGetVertexAttribiv },
{ "glGetVertexAttribPointerv", (void*)&glGetVertexAttribPointerv },
{ "glIsProgram", (void*)&glIsProgram },
{ "glIsShader", (void*)&glIsShader },
{ "glLinkProgram", (void*)&glLinkProgram },
{ "glShaderSource", (void*)&glShaderSource },
{ "glUseProgram", (void*)&glUseProgram },
{ "glUniform1f", (void*)&glUniform1f },
{ "glUniform2f", (void*)&glUniform2f },
{ "glUniform3f", (void*)&glUniform3f },
{ "glUniform4f", (void*)&glUniform4f },
{ "glUniform1i", (void*)&glUniform1i },
{ "glUniform2i", (void*)&glUniform2i },
{ "glUniform3i", (void*)&glUniform3i },
{ "glUniform4i", (void*)&glUniform4i },
{ "glUniform1fv", (void*)&glUniform1fv },
{ "glUniform2fv", (void*)&glUniform2fv },
{ "glUniform3fv", (void*)&glUniform3fv },
{ "glUniform4fv", (void*)&glUniform4fv },
{ "glUniform1iv", (void*)&glUniform1iv },
{ "glUniform2iv", (void*)&glUniform2iv },
{ "glUniform3iv", (void*)&glUniform3iv },
{ "glUniform4iv", (void*)&glUniform4iv },
{ "glUniformMatrix2fv", (void*)&glUniformMatrix2fv },
{ "glUniformMatrix3fv", (void*)&glUniformMatrix3fv },
{ "glUniformMatrix4fv", (void*)&glUniformMatrix4fv },
{ "glValidateProgram", (void*)&glValidateProgram },
{ "glVertexAttrib1d", (void*)&glVertexAttrib1d },
{ "glVertexAttrib1dv", (void*)&glVertexAttrib1dv },
{ "glVertexAttrib1f", (void*)&glVertexAttrib1f },
{ "glVertexAttrib1fv", (void*)&glVertexAttrib1fv },
{ "glVertexAttrib1s", (void*)&glVertexAttrib1s },
{ "glVertexAttrib1sv", (void*)&glVertexAttrib1sv },
{ "glVertexAttrib2d", (void*)&glVertexAttrib2d },
{ "glVertexAttrib2dv", (void*)&glVertexAttrib2dv },
{ "glVertexAttrib2f", (void*)&glVertexAttrib2f },
{ "glVertexAttrib2fv", (void*)&glVertexAttrib2fv },
{ "glVertexAttrib2s", (void*)&glVertexAttrib2s },
{ "glVertexAttrib2sv", (void*)&glVertexAttrib2sv },
{ "glVertexAttrib3d", (void*)&glVertexAttrib3d },
{ "glVertexAttrib3dv", (void*)&glVertexAttrib3dv },
{ "glVertexAttrib3f", (void*)&glVertexAttrib3f },
{ "glVertexAttrib3fv", (void*)&glVertexAttrib3fv },
{ "glVertexAttrib3s", (void*)&glVertexAttrib3s },
{ "glVertexAttrib3sv", (void*)&glVertexAttrib3sv },
{ "glVertexAttrib4Nbv", (void*)&glVertexAttrib4Nbv },
{ "glVertexAttrib4Niv", (void*)&glVertexAttrib4Niv },
{ "glVertexAttrib4Nsv", (void*)&glVertexAttrib4Nsv },
{ "glVertexAttrib4Nub", (void*)&glVertexAttrib4Nub },
{ "glVertexAttrib4Nubv", (void*)&glVertexAttrib4Nubv },
{ "glVertexAttrib4Nuiv", (void*)&glVertexAttrib4Nuiv },
{ "glVertexAttrib4Nusv", (void*)&glVertexAttrib4Nusv },
{ "glVertexAttrib4bv", (void*)&glVertexAttrib4bv },
{ "glVertexAttrib4d", (void*)&glVertexAttrib4d },
{ "glVertexAttrib4dv", (void*)&glVertexAttrib4dv },
{ "glVertexAttrib4f", (void*)&glVertexAttrib4f },
{ "glVertexAttrib4fv", (void*)&glVertexAttrib4fv },
{ "glVertexAttrib4iv", (void*)&glVertexAttrib4iv },
{ "glVertexAttrib4s", (void*)&glVertexAttrib4s },
{ "glVertexAttrib4sv", (void*)&glVertexAttrib4sv },
{ "glVertexAttrib4ubv", (void*)&glVertexAttrib4ubv },
{ "glVertexAttrib4uiv", (void*)&glVertexAttrib4uiv },
{ "glVertexAttrib4usv", (void*)&glVertexAttrib4usv },
{ "glVertexAttribPointer", (void*)&glVertexAttribPointer },
{ "glUniformMatrix2x3fv", (void*)&glUniformMatrix2x3fv },
{ "glUniformMatrix3x2fv", (void*)&glUniformMatrix3x2fv },
{ "glUniformMatrix2x4fv", (void*)&glUniformMatrix2x4fv },
{ "glUniformMatrix4x2fv", (void*)&glUniformMatrix4x2fv },
{ "glUniformMatrix3x4fv", (void*)&glUniformMatrix3x4fv },
{ "glUniformMatrix4x3fv", (void*)&glUniformMatrix4x3fv },
{ "glColorMaski", (void*)&glColorMaski },
{ "glGetBooleani_v", (void*)&glGetBooleani_v },
{ "glGetIntegeri_v", (void*)&glGetIntegeri_v },
{ "glEnablei", (void*)&glEnablei },
{ "glDisablei", (void*)&glDisablei },
{ "glIsEnabledi", (void*)&glIsEnabledi },
{ "glBeginTransformFeedback", (void*)&glBeginTransformFeedback },
{ "glEndTransformFeedback", (void*)&glEndTransformFeedback },
{ "glBindBufferRange", (void*)&glBindBufferRange },
{ "glBindBufferBase", (void*)&glBindBufferBase },
{ "glTransformFeedbackVaryings", (void*)&glTransformFeedbackVaryings },
{ "glGetTransformFeedbackVarying", (void*)&glGetTransformFeedbackVarying },
{ "glClampColor", (void*)&glClampColor },
{ "glBeginConditionalRender", (void*)&glBeginConditionalRender },
{ "glEndConditionalRender", (void*)&glEndConditionalRender },
{ "glVertexAttribIPointer", (void*)&glVertexAttribIPointer },
{ "glGetVertexAttribIiv", (void*)&glGetVertexAttribIiv },
{ "glGetVertexAttribIuiv", (void*)&glGetVertexAttribIuiv },
{ "glVertexAttribI1i", (void*)&glVertexAttribI1i },
{ "glVertexAttribI2i", (void*)&glVertexAttribI2i },
{ "glVertexAttribI3i", (void*)&glVertexAttribI3i },
{ "glVertexAttribI4i", (void*)&glVertexAttribI4i },
{ "glVertexAttribI1ui", (void*)&glVertexAttribI1ui },
{ "glVertexAttribI2ui", (void*)&glVertexAttribI2ui },
{ "glVertexAttribI3ui", (void*)&glVertexAttribI3ui },
{ "glVertexAttribI4ui", (void*)&glVertexAttribI4ui },
{ "glVertexAttribI1iv", (void*)&glVertexAttribI1iv },
{ "glVertexAttribI2iv", (void*)&glVertexAttribI2iv },
{ "glVertexAttribI3iv", (void*)&glVertexAttribI3iv },
{ "glVertexAttribI4iv", (void*)&glVertexAttribI4iv },
{ "glVertexAttribI1uiv", (void*)&glVertexAttribI1uiv },
{ "glVertexAttribI2uiv", (void*)&glVertexAttribI2uiv },
{ "glVertexAttribI3uiv", (void*)&glVertexAttribI3uiv },
{ "glVertexAttribI4uiv", (void*)&glVertexAttribI4uiv },
{ "glVertexAttribI4bv", (void*)&glVertexAttribI4bv },
{ "glVertexAttribI4sv", (void*)&glVertexAttribI4sv },
{ "glVertexAttribI4ubv", (void*)&glVertexAttribI4ubv },
{ "glVertexAttribI4usv", (void*)&glVertexAttribI4usv },
{ "glGetUniformuiv", (void*)&glGetUniformuiv },
{ "glBindFragDataLocation", (void*)&glBindFragDataLocation },
{ "glGetFragDataLocation", (void*)&glGetFragDataLocation },
{ "glUniform1ui", (void*)&glUniform1ui },
{ "glUniform2ui", (void*)&glUniform2ui },
{ "glUniform3ui", (void*)&glUniform3ui },
{ "glUniform4ui", (void*)&glUniform4ui },
{ "glUniform1uiv", (void*)&glUniform1uiv },
{ "glUniform2uiv", (void*)&glUniform2uiv },
{ "glUniform3uiv", (void*)&glUniform3uiv },
{ "glUniform4uiv", (void*)&glUniform4uiv },
{ "glTexParameterIiv", (void*)&glTexParameterIiv },
{ "glTexParameterIuiv", (void*)&glTexParameterIuiv },
{ "glGetTexParameterIiv", (void*)&glGetTexParameterIiv },
{ "glGetTexParameterIuiv", (void*)&glGetTexParameterIuiv },
{ "glClearBufferiv", (void*)&glClearBufferiv },
{ "glClearBufferuiv", (void*)&glClearBufferuiv },
{ "glClearBufferfv", (void*)&glClearBufferfv },
{ "glClearBufferfi", (void*)&glClearBufferfi },
{ "glGetStringi", (void*)&glGetStringi },
{ "glDrawArraysInstanced", (void*)&glDrawArraysInstanced },
{ "glDrawElementsInstanced", (void*)&glDrawElementsInstanced },
{ "glTexBuffer", (void*)&glTexBuffer },
{ "glPrimitiveRestartIndex", (void*)&glPrimitiveRestartIndex },
{ "glGetInteger64i_v", (void*)&glGetInteger64i_v },
{ "glGetBufferParameteri64v", (void*)&glGetBufferParameteri64v },
{ "glFramebufferTexture", (void*)&glFramebufferTexture },
{ "glVertexAttribDivisor", (void*)&glVertexAttribDivisor },
{ "glMinSampleShading", (void*)&glMinSampleShading },
{ "glBlendEquationi", (void*)&glBlendEquationi },
{ "glBlendEquationSeparatei", (void*)&glBlendEquationSeparatei },
{ "glBlendFunci", (void*)&glBlendFunci },
{ "glBlendFuncSeparatei", (void*)&glBlendFuncSeparatei },
{ "glIsRenderbuffer", (void*)&glIsRenderbuffer },
{ "glBindRenderbuffer", (void*)&glBindRenderbuffer },
{ "glDeleteRenderbuffers", (void*)&glDeleteRenderbuffers },
{ "glGenRenderbuffers", (void*)&glGenRenderbuffers },
{ "glRenderbufferStorage", (void*)&glRenderbufferStorage },
{ "glGetRenderbufferParameteriv", (void*)&glGetRenderbufferParameteriv },
{ "glIsFramebuffer", (void*)&glIsFramebuffer },
{ "glBindFramebuffer", (void*)&glBindFramebuffer },
{ "glDeleteFramebuffers", (void*)&glDeleteFramebuffers },
{ "glGenFramebuffers", (void*)&glGenFramebuffers },
{ "glCheckFramebufferStatus", (void*)&glCheckFramebufferStatus },
{ "glFramebufferTexture1D", (void*)&glFramebufferTexture1D },
{ "glFramebufferTexture2D", (void*)&glFramebufferTexture2D },
{ "glFramebufferTexture3D", (void*)&glFramebufferTexture3D },
{ "glFramebufferRenderbuffer", (void*)&glFramebufferRenderbuffer },
{ "glGetFramebufferAttachmentParameteriv", (void*)&glGetFramebufferAttachmentParameteriv },
{ "glGenerateMipmap", (void*)&glGenerateMipmap },
{ "glBlitFramebuffer", (void*)&glBlitFramebuffer },
{ "glRenderbufferStorageMultisample", (void*)&glRenderbufferStorageMultisample },
{ "glFramebufferTextureLayer", (void*)&glFramebufferTextureLayer },
{ "glMapBufferRange", (void*)&glMapBufferRange },
{ "glFlushMappedBufferRange", (void*)&glFlushMappedBufferRange },
{ "glBindVertexArray", (void*)&glBindVertexArray },
{ "glDeleteVertexArrays", (void*)&glDeleteVertexArrays },
{ "glGenVertexArrays", (void*)&glGenVertexArrays },
{ "glIsVertexArray", (void*)&glIsVertexArray },
{ "glGetUniformIndices", (void*)&glGetUniformIndices },
{ "glGetActiveUniformsiv", (void*)&glGetActiveUniformsiv },
{ "glGetActiveUniformName", (void*)&glGetActiveUniformName },
{ "glGetUniformBlockIndex", (void*)&glGetUniformBlockIndex },
{ "glGetActiveUniformBlockiv", (void*)&glGetActiveUniformBlockiv },
{ "glGetActiveUniformBlockName", (void*)&glGetActiveUniformBlockName },
{ "glUniformBlockBinding", (void*)&glUniformBlockBinding },
{ "glCopyBufferSubData", (void*)&glCopyBufferSubData },
{ "glDrawElementsBaseVertex", (void*)&glDrawElementsBaseVertex },
{ "glDrawRangeElementsBaseVertex", (void*)&glDrawRangeElementsBaseVertex },
{ "glDrawElementsInstancedBaseVertex", (void*)&glDrawElementsInstancedBaseVertex },
{ "glMultiDrawElementsBaseVertex", (void*)&glMultiDrawElementsBaseVertex },
{ "glProvokingVertex", (void*)&glProvokingVertex },
{ "glGetInteger64v", (void*)&glGetInteger64v },
{ "glTexImage2DMultisample", (void*)&glTexImage2DMultisample },
{ "glTexImage3DMultisample", (void*)&glTexImage3DMultisample },
{ "glGetMultisamplefv", (void*)&glGetMultisamplefv },
{ "glSampleMaski", (void*)&glSampleMaski },
{ "glBindFragDataLocationIndexed", (void*)&glBindFragDataLocationIndexed },
{ "glGetFragDataIndex", (void*)&glGetFragDataIndex },
{ "glGenSamplers", (void*)&glGenSamplers },
{ "glDeleteSamplers", (void*)&glDeleteSamplers },
{ "glIsSampler", (void*)&glIsSampler },
{ "glBindSampler", (void*)&glBindSampler },
{ "glSamplerParameteri", (void*)&glSamplerParameteri },
{ "glSamplerParameteriv", (void*)&glSamplerParameteriv },
{ "glSamplerParameterf", (void*)&glSamplerParameterf },
{ "glSamplerParameterfv", (void*)&glSamplerParameterfv },
{ "glSamplerParameterIiv", (void*)&glSamplerParameterIiv },
{ "glSamplerParameterIuiv", (void*)&glSamplerParameterIuiv },
{ "glGetSamplerParameteriv", (void*)&glGetSamplerParameteriv },
{ "glGetSamplerParameterIiv", (void*)&glGetSamplerParameterIiv },
{ "glGetSamplerParameterfv", (void*)&glGetSamplerParameterfv },
{ "glGetSamplerParameterIuiv", (void*)&glGetSamplerParameterIuiv },
{ "glQueryCounter", (void*)&glQueryCounter },
{ "glGetQueryObjecti64v", (void*)&glGetQueryObjecti64v },
{ "glGetQueryObjectui64v", (void*)&glGetQueryObjectui64v },
{ "glVertexAttribP1ui", (void*)&glVertexAttribP1ui },
{ "glVertexAttribP1uiv", (void*)&glVertexAttribP1uiv },
{ "glVertexAttribP2ui", (void*)&glVertexAttribP2ui },
{ "glVertexAttribP2uiv", (void*)&glVertexAttribP2uiv },
{ "glVertexAttribP3ui", (void*)&glVertexAttribP3ui },
{ "glVertexAttribP3uiv", (void*)&glVertexAttribP3uiv },
{ "glVertexAttribP4ui", (void*)&glVertexAttribP4ui },
{ "glVertexAttribP4uiv", (void*)&glVertexAttribP4uiv },
{ "glDrawArraysIndirect", (void*)&glDrawArraysIndirect },
{ "glDrawElementsIndirect", (void*)&glDrawElementsIndirect },
{ "glUniform1d", (void*)&glUniform1d },
{ "glUniform2d", (void*)&glUniform2d },
{ "glUniform3d", (void*)&glUniform3d },
{ "glUniform4d", (void*)&glUniform4d },
{ "glUniform1dv", (void*)&glUniform1dv },
{ "glUniform2dv", (void*)&glUniform2dv },
{ "glUniform3dv", (void*)&glUniform3dv },
{ "glUniform4dv", (void*)&glUniform4dv },
{ "glUniformMatrix2dv", (void*)&glUniformMatrix2dv },
{ "glUniformMatrix3dv", (void*)&glUniformMatrix3dv },
{ "glUniformMatrix4dv", (void*)&glUniformMatrix4dv },
{ "glUniformMatrix2x3dv", (void*)&glUniformMatrix2x3dv },
{ "glUniformMatrix2x4dv", (void*)&glUniformMatrix2x4dv },
{ "glUniformMatrix3x2dv", (void*)&glUniformMatrix3x2dv },
{ "glUniformMatrix3x4dv", (void*)&glUniformMatrix3x4dv },
{ "glUniformMatrix4x2dv", (void*)&glUniformMatrix4x2dv },
{ "glUniformMatrix4x3dv", (void*)&glUniformMatrix4x3dv },
{ "glGetUniformdv", (void*)&glGetUniformdv },
{ "glGetSubroutineUniformLocation", (void*)&glGetSubroutineUniformLocation },
{ "glGetSubroutineIndex", (void*)&glGetSubroutineIndex },
{ "glGetActiveSubroutineUniformiv", (void*)&glGetActiveSubroutineUniformiv },
{ "glGetActiveSubroutineUniformName", (void*)&glGetActiveSubroutineUniformName },
{ "glGetActiveSubroutineName", (void*)&glGetActiveSubroutineName },
{ "glUniformSubroutinesuiv", (void*)&glUniformSubroutinesuiv },
{ "glGetUniformSubroutineuiv", (void*)&glGetUniformSubroutineuiv },
{ "glGetProgramStageiv", (void*)&glGetProgramStageiv },
{ "glPatchParameteri", (void*)&glPatchParameteri },
{ "glPatchParameterfv", (void*)&glPatchParameterfv },
{ "glBindTransformFeedback", (void*)&glBindTransformFeedback },
{ "glDeleteTransformFeedbacks", (void*)&glDeleteTransformFeedbacks },
{ "glGenTransformFeedbacks", (void*)&glGenTransformFeedbacks },
{ "glIsTransformFeedback", (void*)&glIsTransformFeedback },
{ "glPauseTransformFeedback", (void*)&glPauseTransformFeedback },
{ "glResumeTransformFeedback", (void*)&glResumeTransformFeedback },
{ "glDrawTransformFeedback", (void*)&glDrawTransformFeedback },
{ "glDrawTransformFeedbackStream", (void*)&glDrawTransformFeedbackStream },
{ "glBeginQueryIndexed", (void*)&glBeginQueryIndexed },
{ "glEndQueryIndexed", (void*)&glEndQueryIndexed },
{ "glGetQueryIndexediv", (void*)&glGetQueryIndexediv },
{ "glReleaseShaderCompiler", (void*)&glReleaseShaderCompiler },
{ "glShaderBinary", (void*)&glShaderBinary },
{ "glGetShaderPrecisionFormat", (void*)&glGetShaderPrecisionFormat },
{ "glDepthRangef", (void*)&glDepthRangef },
{ "glClearDepthf", (void*)&glClearDepthf },
{ "glGetProgramBinary", (void*)&glGetProgramBinary },
{ "glProgramBinary", (void*)&glProgramBinary },
{ "glProgramParameteri", (void*)&glProgramParameteri },
{ "glUseProgramStages", (void*)&glUseProgramStages },
{ "glActiveShaderProgram", (void*)&glActiveShaderProgram },
{ "glCreateShaderProgramv", (void*)&glCreateShaderProgramv },
{ "glBindProgramPipeline", (void*)&glBindProgramPipeline },
{ "glDeleteProgramPipelines", (void*)&glDeleteProgramPipelines },
{ "glGenProgramPipelines", (void*)&glGenProgramPipelines },
{ "glIsProgramPipeline", (void*)&glIsProgramPipeline },
{ "glGetProgramPipelineiv", (void*)&glGetProgramPipelineiv },
{ "glProgramUniform1i", (void*)&glProgramUniform1i },
{ "glProgramUniform1iv", (void*)&glProgramUniform1iv },
{ "glProgramUniform1f", (void*)&glProgramUniform1f },
{ "glProgramUniform1fv", (void*)&glProgramUniform1fv },
{ "glProgramUniform1d", (void*)&glProgramUniform1d },
{ "glProgramUniform1dv", (void*)&glProgramUniform1dv },
{ "glProgramUniform1ui", (void*)&glProgramUniform1ui },
{ "glProgramUniform1uiv", (void*)&glProgramUniform1uiv },
{ "glProgramUniform2i", (void*)&glProgramUniform2i },
{ "glProgramUniform2iv", (void*)&glProgramUniform2iv },
{ "glProgramUniform2f", (void*)&glProgramUniform2f },
{ "glProgramUniform2fv", (void*)&glProgramUniform2fv },
{ "glProgramUniform2d", (void*)&glProgramUniform2d },
{ "glProgramUniform2dv", (void*)&glProgramUniform2dv },
{ "glProgramUniform2ui", (void*)&glProgramUniform2ui },
{ "glProgramUniform2uiv", (void*)&glProgramUniform2uiv },
{ "glProgramUniform3i", (void*)&glProgramUniform3i },
{ "glProgramUniform3iv", (void*)&glProgramUniform3iv },
{ "glProgramUniform3f", (void*)&glProgramUniform3f },
{ "glProgramUniform3fv", (void*)&glProgramUniform3fv },
{ "glProgramUniform3d", (void*)&glProgramUniform3d },
{ "glProgramUniform3dv", (void*)&glProgramUniform3dv },
{ "glProgramUniform3ui", (void*)&glProgramUniform3ui },
{ "glProgramUniform3uiv", (void*)&glProgramUniform3uiv },
{ "glProgramUniform4i", (void*)&glProgramUniform4i },
{ "glProgramUniform4iv", (void*)&glProgramUniform4iv },
{ "glProgramUniform4f", (void*)&glProgramUniform4f },
{ "glProgramUniform4fv", (void*)&glProgramUniform4fv },
{ "glProgramUniform4d", (void*)&glProgramUniform4d },
{ "glProgramUniform4dv", (void*)&glProgramUniform4dv },
{ "glProgramUniform4ui", (void*)&glProgramUniform4ui },
{ "glProgramUniform4uiv", (void*)&glProgramUniform4uiv },
{ "glProgramUniformMatrix2fv", (void*)&glProgramUniformMatrix2fv },
{ "glProgramUniformMatrix3fv", (void*)&glProgramUniformMatrix3fv },
{ "glProgramUniformMatrix4fv", (void*)&glProgramUniformMatrix4fv },
{ "glProgramUniformMatrix2dv", (void*)&glProgramUniformMatrix2dv },
{ "glProgramUniformMatrix3dv", (void*)&glProgramUniformMatrix3dv },
{ "glProgramUniformMatrix4dv", (void*)&glProgramUniformMatrix4dv },
{ "glProgramUniformMatrix2x3fv", (void*)&glProgramUniformMatrix2x3fv },
{ "glProgramUniformMatrix3x2fv", (void*)&glProgramUniformMatrix3x2fv },
{ "glProgramUniformMatrix2x4fv", (void*)&glProgramUniformMatrix2x4fv },
{ "glProgramUniformMatrix4x2fv", (void*)&glProgramUniformMatrix4x2fv },
{ "glProgramUniformMatrix3x4fv", (void*)&glProgramUniformMatrix3x4fv },
{ "glProgramUniformMatrix4x3fv", (void*)&glProgramUniformMatrix4x3fv },
{ "glProgramUniformMatrix2x3dv", (void*)&glProgramUniformMatrix2x3dv },
{ "glProgramUniformMatrix3x2dv", (void*)&glProgramUniformMatrix3x2dv },
{ "glProgramUniformMatrix2x4dv", (void*)&glProgramUniformMatrix2x4dv },
{ "glProgramUniformMatrix4x2dv", (void*)&glProgramUniformMatrix4x2dv },
{ "glProgramUniformMatrix3x4dv", (void*)&glProgramUniformMatrix3x4dv },
{ "glProgramUniformMatrix4x3dv", (void*)&glProgramUniformMatrix4x3dv },
{ "glValidateProgramPipeline", (void*)&glValidateProgramPipeline },
{ "glGetProgramPipelineInfoLog", (void*)&glGetProgramPipelineInfoLog },
{ "glVertexAttribL1d", (void*)&glVertexAttribL1d },
{ "glVertexAttribL2d", (void*)&glVertexAttribL2d },
{ "glVertexAttribL3d", (void*)&glVertexAttribL3d },
{ "glVertexAttribL4d", (void*)&glVertexAttribL4d },
{ "glVertexAttribL1dv", (void*)&glVertexAttribL1dv },
{ "glVertexAttribL2dv", (void*)&glVertexAttribL2dv },
{ "glVertexAttribL3dv", (void*)&glVertexAttribL3dv },
{ "glVertexAttribL4dv", (void*)&glVertexAttribL4dv },
{ "glVertexAttribLPointer", (void*)&glVertexAttribLPointer },
{ "glGetVertexAttribLdv", (void*)&glGetVertexAttribLdv },
{ "glViewportArrayv", (void*)&glViewportArrayv },
{ "glViewportIndexedf", (void*)&glViewportIndexedf },
{ "glViewportIndexedfv", (void*)&glViewportIndexedfv },
{ "glScissorArrayv", (void*)&glScissorArrayv },
{ "glScissorIndexed", (void*)&glScissorIndexed },
{ "glScissorIndexedv", (void*)&glScissorIndexedv },
{ "glDepthRangeArrayv", (void*)&glDepthRangeArrayv },
{ "glDepthRangeIndexed", (void*)&glDepthRangeIndexed },
{ "glGetFloati_v", (void*)&glGetFloati_v },
{ "glGetDoublei_v", (void*)&glGetDoublei_v },
};
return function_map[symbol];
}
#endif