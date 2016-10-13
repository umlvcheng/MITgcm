C $Header: /u/gcmpack/MITgcm/pkg/exf/exf_ad_check_lev4_dir.h,v 1.13 2016/10/13 20:28:57 mmazloff Exp $
C $Name:  $

#ifdef ALLOW_EXF

CADJ STORE StoreEXF1        = tapelev4, key = ilev_4
CADJ STORE StoreEXF2        = tapelev4, key = ilev_4
CADJ STORE StoreCTRLS1      = tapelev4, key = ilev_4

# ifdef EXF_SEAICE_FRACTION
CADJ STORE areamask0    = tapelev4, key = ilev_4
CADJ STORE areamask1    = tapelev4, key = ilev_4
# endif

# ifdef USE_EXFCO2
CADJ STORE apco20        = tapelev4, key = ilev_4
CADJ STORE apco21        = tapelev4, key = ilev_4
# endif

# ifdef ALLOW_HFLUX_CONTROL
CADJ STORE xx_hflux0     = tapelev4, key = ilev_4
CADJ STORE xx_hflux1     = tapelev4, key = ilev_4
# endif
# ifdef ALLOW_SFLUX_CONTROL
CADJ STORE xx_sflux0     = tapelev4, key = ilev_4
CADJ STORE xx_sflux1     = tapelev4, key = ilev_4
# endif
# ifdef ALLOW_USTRESS_CONTROL
CADJ STORE xx_tauu0      = tapelev4, key = ilev_4
CADJ STORE xx_tauu1      = tapelev4, key = ilev_4
# endif
# ifdef ALLOW_VSTRESS_CONTROL
CADJ STORE xx_tauv0      = tapelev4, key = ilev_4
CADJ STORE xx_tauv1      = tapelev4, key = ilev_4
# endif
# ifdef ALLOW_SST_CONTROL
CADJ STORE xx_sst0      = tapelev4, key = ilev_4
CADJ STORE xx_sst1      = tapelev4, key = ilev_4
# endif
# ifdef ALLOW_SSS_CONTROL
CADJ STORE xx_sss0      = tapelev4, key = ilev_4
CADJ STORE xx_sss1      = tapelev4, key = ilev_4
# endif

#endif /* ALLOW_EXF */
