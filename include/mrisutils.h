#include "mri.h"
#include "mrisurf.h"

#ifndef SUTILS_INCLUDED
#define SUTILS_INCLUDED

void MRISsmoothSurface(MRI_SURFACE *mris,int niter,float step);
void MRISsmoothSurface2(MRI_SURFACE *mris,int niter,float step,int avrg);
void MRIScenterCOG(MRI_SURFACE *mris);
void MRIScenterCOG2(MRI_SURFACE *mris,double *xCOG,double *yCOG,double *zCOG);
MRI* MRISpeelVolume(MRIS *mris,MRI *mri_src,MRI *mri_dst,int type,unsigned char val,unsigned long *NbVoxels);
MRIS *MRISmatchSurfaceToLabel(MRIS *mris,MRI *mri_seg,int label,MRI_REGION *mri_region,INTEGRATION_PARMS *integration_parms,int connectivity);

#endif
