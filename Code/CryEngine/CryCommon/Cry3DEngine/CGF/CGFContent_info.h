// Copyright 2001-2017 Crytek GmbH / Crytek Group. All rights reserved. 

#include "CGFContent.h"

STRUCT_INFO_BEGIN(TFace)
VAR_INFO(i0)
VAR_INFO(i1)
VAR_INFO(i2)
STRUCT_INFO_END(TFace)

STRUCT_INFO_BEGIN(IntSkinVertex)
VAR_INFO(__obsolete0)
VAR_INFO(pos)
VAR_INFO(__obsolete2)
VAR_INFO(boneIDs)
VAR_INFO(weights)
VAR_INFO(color)
STRUCT_INFO_END(IntSkinVertex)

STRUCT_INFO_BEGIN(CControllerInfo)
VAR_INFO(m_nControllerID)
VAR_INFO(m_nPosKeyTimeTrack)
VAR_INFO(m_nPosTrack)
VAR_INFO(m_nRotKeyTimeTrack)
VAR_INFO(m_nRotTrack)
STRUCT_INFO_END(CControllerInfo)

STRUCT_INFO_BEGIN(SVClothVertexAttributes)
VAR_INFO(lraIdx)
VAR_INFO(lraNextParent)
VAR_INFO(lraDist)
STRUCT_INFO_END(SVClothVertexAttributes)

STRUCT_INFO_BEGIN(SVClothLink)
VAR_INFO(i1)
VAR_INFO(i2)
VAR_INFO(lenSqr)
STRUCT_INFO_END(SVClothLink)

STRUCT_INFO_BEGIN(SVClothVertex)
VAR_INFO(attributes)
STRUCT_INFO_END(SVClothVertex)

STRUCT_INFO_BEGIN(SVClothChunkVertex)
VAR_INFO(attributes)
VAR_INFO(linkCount)
STRUCT_INFO_END(SVClothChunkVertex)

STRUCT_INFO_BEGIN(SVClothLraNotAttachedOrderedIdx)
VAR_INFO(lraNotAttachedOrderedIdx)
STRUCT_INFO_END(SVClothLraNotAttachedOrderedIdx)

STRUCT_INFO_BEGIN(SVClothBendTrianglePair)
VAR_INFO(angle)
VAR_INFO(p0)
VAR_INFO(p1)
VAR_INFO(p2)
VAR_INFO(p3)
VAR_INFO(idxNormal0)
VAR_INFO(idxNormal1)
STRUCT_INFO_END(SVClothBendTrianglePair)

STRUCT_INFO_BEGIN(SVClothBendTriangle)
VAR_INFO(p0)
VAR_INFO(p1)
VAR_INFO(p2)
STRUCT_INFO_END(SVClothBendTriangle)

STRUCT_INFO_BEGIN(UCol)
VAR_INFO(dcolor)
STRUCT_INFO_END(UCol)

STRUCT_INFO_BEGIN(SVF_P3S_C4B_T2S)
VAR_INFO(xyz)
VAR_INFO(color)
VAR_INFO(st)
STRUCT_INFO_END(SVF_P3S_C4B_T2S)

STRUCT_INFO_BEGIN(SVF_P3F_C4B_T2S)
STRUCT_VAR_INFO(xyz, TYPE_INFO(Vec3))
STRUCT_VAR_INFO(color, TYPE_INFO(UCol))
STRUCT_VAR_INFO(st, TYPE_INFO(Vec2f16))
STRUCT_INFO_END(SVF_P3F_C4B_T2S)

STRUCT_INFO_BEGIN(SPipTangents)
STRUCT_VAR_INFO(Tangent, TYPE_INFO(Vec4sf))
STRUCT_VAR_INFO(Bitangent, TYPE_INFO(Vec4sf))
STRUCT_INFO_END(SPipTangents)