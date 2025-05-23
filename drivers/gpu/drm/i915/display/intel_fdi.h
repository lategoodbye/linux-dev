/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2020 Intel Corporation
 */

#ifndef _INTEL_FDI_H_
#define _INTEL_FDI_H_

#include <linux/types.h>

enum pipe;
struct intel_atomic_state;
struct intel_crtc;
struct intel_crtc_state;
struct intel_display;
struct intel_display;
struct intel_encoder;
struct intel_link_bw_limits;

int intel_fdi_add_affected_crtcs(struct intel_atomic_state *state);
int intel_fdi_link_freq(struct intel_display *display,
			const struct intel_crtc_state *pipe_config);
bool intel_fdi_compute_pipe_bpp(struct intel_crtc_state *crtc_state);
int ilk_fdi_compute_config(struct intel_crtc *intel_crtc,
			   struct intel_crtc_state *pipe_config);
int intel_fdi_atomic_check_link(struct intel_atomic_state *state,
				struct intel_link_bw_limits *limits);
void intel_fdi_normal_train(struct intel_crtc *crtc);
void ilk_fdi_disable(struct intel_crtc *crtc);
void ilk_fdi_pll_disable(struct intel_crtc *intel_crtc);
void ilk_fdi_pll_enable(const struct intel_crtc_state *crtc_state);
void intel_fdi_init_hook(struct intel_display *display);
void hsw_fdi_link_train(struct intel_encoder *encoder,
			const struct intel_crtc_state *crtc_state);
void hsw_fdi_disable(struct intel_encoder *encoder);
void intel_fdi_pll_freq_update(struct intel_display *display);

void intel_fdi_link_train(struct intel_crtc *crtc,
			  const struct intel_crtc_state *crtc_state);

void assert_fdi_tx_enabled(struct intel_display *display, enum pipe pipe);
void assert_fdi_tx_disabled(struct intel_display *display, enum pipe pipe);
void assert_fdi_rx_enabled(struct intel_display *display, enum pipe pipe);
void assert_fdi_rx_disabled(struct intel_display *display, enum pipe pipe);
void assert_fdi_tx_pll_enabled(struct intel_display *display, enum pipe pipe);
void assert_fdi_rx_pll_enabled(struct intel_display *display, enum pipe pipe);
void assert_fdi_rx_pll_disabled(struct intel_display *display, enum pipe pipe);

#endif
