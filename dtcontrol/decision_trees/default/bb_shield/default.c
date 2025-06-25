#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.005f,-13.995f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 5.82) {
		if (x[1] <= 7.91) {
			if (x[1] <= -8.65) {
				if (x[0] <= 3.59) {
					if (x[1] <= -11.53) {
						if (x[0] <= 0.54) {
							if (x[1] <= -12.72) {
								if (x[1] <= -12.89) {
									return 0.0f;
								}
								else {
									if (x[0] <= 0.12) {
										if (x[1] <= -12.85) {
											if (x[0] <= 0.08) {
												if (x[1] <= -12.87) {
													if (x[0] <= 0.06) {
														if (x[1] <= -12.88) {
															if (x[0] <= 0.01) {
																return 2.0f;
															}
															else {
																if (x[0] <= 0.03) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 0.04) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[0] <= 0.02) {
																if (x[0] <= 0.01) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[0] <= 0.09) {
													if (x[1] <= -12.86) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 0.1) {
												return 2.0f;
											}
											else {
												if (x[1] <= -12.8) {
													if (x[0] <= 0.11) {
														if (x[1] <= -12.83) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 0.14) {
											if (x[1] <= -12.76) {
												return 0.0f;
											}
											else {
												if (x[0] <= 0.13) {
													return 2.0f;
												}
												else {
													if (x[1] <= -12.74) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (x[0] <= 0.25) {
									if (x[1] <= -12.5) {
										if (x[0] <= 0.17) {
											if (x[0] <= 0.15) {
												return 2.0f;
											}
											else {
												if (x[1] <= -12.68) {
													if (x[0] <= 0.16) {
														if (x[1] <= -12.7) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											if (x[1] <= -12.59) {
												if (x[0] <= 0.19) {
													if (x[1] <= -12.65) {
														return 0.0f;
													}
													else {
														if (x[0] <= 0.18) {
															return 2.0f;
														}
														else {
															if (x[1] <= -12.62) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 0.21) {
													if (x[1] <= -12.58) {
														if (x[0] <= 0.2) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[1] <= -12.55) {
														return 0.0f;
													}
													else {
														if (x[0] <= 0.23) {
															if (x[1] <= -12.53) {
																if (x[0] <= 0.22) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[1] <= -12.51) {
																return 0.0f;
															}
															else {
																if (x[0] <= 0.24) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}

											}

										}

									}
									else {
										return 2.0f;
									}

								}
								else {
									if (x[1] <= -12.16) {
										if (x[0] <= 0.36) {
											if (x[1] <= -12.38) {
												if (x[1] <= -12.45) {
													return 0.0f;
												}
												else {
													if (x[0] <= 0.28) {
														if (x[1] <= -12.41) {
															if (x[0] <= 0.27) {
																if (x[1] <= -12.44) {
																	if (x[0] <= 0.26) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 0.29) {
													return 2.0f;
												}
												else {
													if (x[1] <= -12.26) {
														if (x[0] <= 0.33) {
															if (x[1] <= -12.33) {
																if (x[0] <= 0.3) {
																	if (x[1] <= -12.35) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 0.31) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= -12.29) {
																		if (x[0] <= 0.32) {
																			if (x[1] <= -12.31) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 0.34) {
															return 2.0f;
														}
														else {
															if (x[1] <= -12.22) {
																if (x[0] <= 0.35) {
																	if (x[1] <= -12.25) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= -12.2) {
												return 0.0f;
											}
											else {
												if (x[0] <= 0.38) {
													if (x[0] <= 0.37) {
														return 2.0f;
													}
													else {
														if (x[1] <= -12.18) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 0.4) {
											if (x[1] <= -12.14) {
												if (x[0] <= 0.39) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 2.0f;
											}

										}
										else {
											if (x[1] <= -11.9) {
												if (x[0] <= 0.48) {
													if (x[1] <= -12.03) {
														if (x[0] <= 0.43) {
															if (x[1] <= -12.1) {
																return 0.0f;
															}
															else {
																if (x[1] <= -12.06) {
																	if (x[0] <= 0.41) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 0.42) {
																			if (x[1] <= -12.08) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 0.44) {
															return 2.0f;
														}
														else {
															if (x[1] <= -11.95) {
																if (x[0] <= 0.46) {
																	if (x[1] <= -11.98) {
																		if (x[0] <= 0.45) {
																			if (x[1] <= -12.01) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	if (x[1] <= -11.96) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 0.47) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -11.93) {
														return 0.0f;
													}
													else {
														if (x[0] <= 0.49) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -11.8) {
													if (x[0] <= 0.5) {
														return 2.0f;
													}
													else {
														if (x[0] <= 0.53) {
															if (x[1] <= -11.86) {
																if (x[0] <= 0.51) {
																	if (x[1] <= -11.88) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 0.52) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= -11.84) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= -11.82) {
																			return 2.0f;
																		}
																		else {
																			if (x[1] <= -11.81) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}

																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}

								}

							}

						}
						else {
							if (x[1] <= -11.64) {
								if (x[0] <= 0.6) {
									if (x[1] <= -11.78) {
										return 0.0f;
									}
									else {
										if (x[0] <= 0.58) {
											if (x[1] <= -11.71) {
												if (x[0] <= 0.55) {
													return 2.0f;
												}
												else {
													if (x[1] <= -11.74) {
														return 0.0f;
													}
													else {
														if (x[0] <= 0.57) {
															if (x[1] <= -11.73) {
																if (x[0] <= 0.56) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												return 2.0f;
											}

										}
										else {
											if (x[1] <= -11.67) {
												return 0.0f;
											}
											else {
												if (x[1] <= -11.66) {
													if (x[0] <= 0.59) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= -11.65) {
										return 0.0f;
									}
									else {
										if (x[0] <= 1.93) {
											if (x[0] <= 1.92) {
												return 0.0f;
											}
											else {
												return 2.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (x[0] <= 2.54) {
									if (x[0] <= 1.74) {
										if (x[0] <= 0.63) {
											if (x[0] <= 0.61) {
												return 2.0f;
											}
											else {
												if (x[1] <= -11.58) {
													if (x[1] <= -11.6) {
														return 0.0f;
													}
													else {
														if (x[0] <= 0.62) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											if (x[0] <= 1.69) {
												if (x[0] <= 0.64) {
													if (x[1] <= -11.56) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[1] <= -11.55) {
													return 0.0f;
												}
												else {
													if (x[0] <= 1.71) {
														if (x[1] <= -11.54) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= -11.57) {
											if (x[0] <= 2.19) {
												if (x[1] <= -11.6) {
													if (x[0] <= 1.84) {
														return 0.0f;
													}
													else {
														if (x[0] <= 2.1) {
															if (x[1] <= -11.62) {
																if (x[0] <= 1.98) {
																	if (x[0] <= 1.86) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= -11.63) {
																			if (x[0] <= 1.94) {
																				if (x[0] <= 1.9) {
																					if (x[0] <= 1.88) {
																						return 0.0f;
																					}
																					else {
																						if (x[0] <= 1.89) {
																							return 2.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}

																				}
																				else {
																					return 2.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 2.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 2.04) {
																		if (x[0] <= 2.03) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= -11.63) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= -11.61) {
																	if (x[0] <= 2.07) {
																		if (x[0] <= 1.86) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 2.05) {
																				return 2.0f;
																			}
																			else {
																				if (x[0] <= 2.06) {
																					return 0.0f;
																				}
																				else {
																					return 2.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 1.8) {
														if (x[0] <= 1.78) {
															return 0.0f;
														}
														else {
															if (x[1] <= -11.58) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														if (x[0] <= 2.13) {
															return 2.0f;
														}
														else {
															if (x[1] <= -11.59) {
																if (x[0] <= 2.15) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 2.17) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 2.23) {
													if (x[1] <= -11.58) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 2.3) {
												if (x[1] <= -11.56) {
													if (x[0] <= 2.26) {
														if (x[0] <= 1.75) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[0] <= 2.28) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[1] <= -11.55) {
													if (x[1] <= -11.56) {
														return 0.0f;
													}
													else {
														if (x[0] <= 2.46) {
															if (x[0] <= 2.37) {
																if (x[0] <= 2.32) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 2.42) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 2.44) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -11.54) {
														if (x[0] <= 2.5) {
															if (x[0] <= 2.36) {
																if (x[0] <= 2.33) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 2.46) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 2.47) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}

									}

								}
								else {
									if (x[0] <= 2.58) {
										if (x[1] <= -11.54) {
											return 0.0f;
										}
										else {
											if (x[0] <= 2.56) {
												return 0.0f;
											}
											else {
												return 2.0f;
											}

										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}

					}
					else {
						if (x[0] <= 2.73) {
							if (x[1] <= -11.28) {
								if (x[0] <= 0.65) {
									return 2.0f;
								}
								else {
									if (x[0] <= 1.45) {
										if (x[1] <= -11.39) {
											if (x[0] <= 0.7) {
												if (x[1] <= -11.47) {
													if (x[0] <= 0.67) {
														if (x[1] <= -11.51) {
															return 0.0f;
														}
														else {
															if (x[0] <= 0.66) {
																return 2.0f;
															}
															else {
																if (x[1] <= -11.49) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 0.68) {
														return 2.0f;
													}
													else {
														if (x[1] <= -11.44) {
															return 0.0f;
														}
														else {
															if (x[1] <= -11.42) {
																if (x[0] <= 0.69) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 1.35) {
													if (x[0] <= 0.71) {
														if (x[1] <= -11.4) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= -11.42) {
														return 0.0f;
													}
													else {
														if (x[0] <= 1.41) {
															if (x[1] <= -11.4) {
																if (x[0] <= 1.39) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= -11.41) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 1.22) {
												if (x[0] <= 0.73) {
													if (x[0] <= 0.71) {
														return 2.0f;
													}
													else {
														if (x[1] <= -11.36) {
															if (x[0] <= 0.72) {
																if (x[1] <= -11.38) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[1] <= -11.33) {
														if (x[0] <= 1.15) {
															if (x[0] <= 0.74) {
																if (x[1] <= -11.34) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= -11.35) {
																return 0.0f;
															}
															else {
																if (x[1] <= -11.34) {
																	if (x[0] <= 1.19) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 1.03) {
															if (x[1] <= -11.3) {
																if (x[0] <= 0.75) {
																	if (x[0] <= 0.74) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -11.31) {
																			return 0.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 1.01) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= -11.31) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 1.02) {
																				return 2.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[0] <= 0.91) {
																	if (x[0] <= 0.75) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -11.29) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 0.76) {
																				return 2.0f;
																			}
																			else {
																				if (x[0] <= 0.87) {
																					return 0.0f;
																				}
																				else {
																					if (x[0] <= 0.88) {
																						return 2.0f;
																					}
																					else {
																						if (x[0] <= 0.89) {
																							return 0.0f;
																						}
																						else {
																							if (x[0] <= 0.9) {
																								return 2.0f;
																							}
																							else {
																								return 0.0f;
																							}

																						}

																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[0] <= 0.97) {
																		if (x[1] <= -11.29) {
																			if (x[0] <= 0.92) {
																				return 2.0f;
																			}
																			else {
																				if (x[0] <= 0.93) {
																					return 0.0f;
																				}
																				else {
																					if (x[0] <= 0.94) {
																						return 2.0f;
																					}
																					else {
																						if (x[0] <= 0.95) {
																							return 0.0f;
																						}
																						else {
																							if (x[0] <= 0.96) {
																								return 2.0f;
																							}
																							else {
																								return 0.0f;
																							}

																						}

																					}

																				}

																			}

																		}
																		else {
																			return 2.0f;
																		}

																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= -11.32) {
																if (x[0] <= 1.09) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= -11.36) {
													if (x[0] <= 1.31) {
														if (x[0] <= 1.25) {
															return 0.0f;
														}
														else {
															if (x[1] <= -11.38) {
																return 0.0f;
															}
															else {
																if (x[0] <= 1.28) {
																	if (x[1] <= -11.37) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}

														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 2.62) {
											if (x[0] <= 1.63) {
												if (x[1] <= -11.44) {
													if (x[1] <= -11.49) {
														if (x[0] <= 1.61) {
															return 0.0f;
														}
														else {
															if (x[1] <= -11.5) {
																return 0.0f;
															}
															else {
																if (x[0] <= 1.62) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 1.55) {
															if (x[1] <= -11.46) {
																return 0.0f;
															}
															else {
																if (x[0] <= 1.51) {
																	if (x[0] <= 1.49) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 1.5) {
																			if (x[1] <= -11.45) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															if (x[1] <= -11.47) {
																if (x[0] <= 1.59) {
																	if (x[0] <= 1.57) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= -11.48) {
																			return 0.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}

																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[0] <= 2.58) {
													if (x[0] <= 1.68) {
														if (x[1] <= -11.51) {
															if (x[1] <= -11.52) {
																return 0.0f;
															}
															else {
																if (x[0] <= 1.65) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[1] <= -11.44) {
														if (x[0] <= 2.61) {
															if (x[1] <= -11.49) {
																if (x[0] <= 2.59) {
																	if (x[1] <= -11.51) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 2.6) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= -11.47) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 2.66) {
												if (x[1] <= -11.39) {
													return 0.0f;
												}
												else {
													if (x[0] <= 2.64) {
														if (x[1] <= -11.36) {
															if (x[0] <= 2.63) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[1] <= -11.32) {
															return 0.0f;
														}
														else {
															if (x[0] <= 2.65) {
																return 2.0f;
															}
															else {
																if (x[1] <= -11.3) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[0] <= 2.67) {
									if (x[1] <= -11.27) {
										if (x[0] <= 2.66) {
											if (x[0] <= 0.78) {
												if (x[0] <= 0.76) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 2.0f;
											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 2.0f;
									}

								}
								else {
									if (x[1] <= -11.07) {
										if (x[1] <= -11.19) {
											if (x[0] <= 2.68) {
												if (x[1] <= -11.23) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[0] <= 2.7) {
												if (x[1] <= -11.16) {
													if (x[0] <= 2.69) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[1] <= -11.12) {
													return 0.0f;
												}
												else {
													if (x[0] <= 2.71) {
														return 2.0f;
													}
													else {
														if (x[1] <= -11.09) {
															return 0.0f;
														}
														else {
															if (x[0] <= 2.72) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}

										}

									}
									else {
										return 2.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= -10.02) {
								if (x[0] <= 2.96) {
									if (x[1] <= -10.72) {
										if (x[0] <= 2.8) {
											if (x[1] <= -10.98) {
												if (x[1] <= -11.02) {
													return 0.0f;
												}
												else {
													if (x[0] <= 2.74) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 2.76) {
													if (x[1] <= -10.92) {
														if (x[0] <= 2.75) {
															return 2.0f;
														}
														else {
															if (x[1] <= -10.95) {
																return 0.0f;
															}
															else {
																if (x[1] <= -10.93) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[1] <= -10.85) {
														if (x[1] <= -10.87) {
															return 0.0f;
														}
														else {
															if (x[0] <= 2.77) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 2.78) {
															return 2.0f;
														}
														else {
															if (x[1] <= -10.78) {
																if (x[0] <= 2.79) {
																	if (x[1] <= -10.82) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= -10.75) {
												return 0.0f;
											}
											else {
												if (x[0] <= 2.81) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 2.85) {
											if (x[1] <= -10.62) {
												if (x[0] <= 2.82) {
													return 2.0f;
												}
												else {
													if (x[1] <= -10.68) {
														return 0.0f;
													}
													else {
														if (x[0] <= 2.83) {
															return 2.0f;
														}
														else {
															if (x[0] <= 2.84) {
																if (x[1] <= -10.65) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												return 2.0f;
											}

										}
										else {
											if (x[1] <= -10.39) {
												if (x[0] <= 2.9) {
													if (x[1] <= -10.55) {
														if (x[0] <= 2.86) {
															if (x[1] <= -10.59) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 2.87) {
															return 2.0f;
														}
														else {
															if (x[1] <= -10.47) {
																if (x[0] <= 2.88) {
																	if (x[1] <= -10.5) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 2.89) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= -10.44) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}

													}

												}
												else {
													if (x[1] <= -10.42) {
														return 0.0f;
													}
													else {
														if (x[0] <= 2.91) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 2.92) {
													return 2.0f;
												}
												else {
													if (x[1] <= -10.25) {
														if (x[0] <= 2.94) {
															if (x[1] <= -10.31) {
																if (x[0] <= 2.93) {
																	if (x[1] <= -10.36) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[1] <= -10.28) {
																return 0.0f;
															}
															else {
																if (x[0] <= 2.95) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}

									}

								}
								else {
									if (x[1] <= -10.13) {
										if (x[0] <= 2.99) {
											if (x[1] <= -10.2) {
												return 0.0f;
											}
											else {
												if (x[0] <= 2.97) {
													return 2.0f;
												}
												else {
													if (x[1] <= -10.17) {
														return 0.0f;
													}
													else {
														if (x[0] <= 2.98) {
															return 2.0f;
														}
														else {
															if (x[1] <= -10.14) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[0] <= 3.18) {
											if (x[0] <= 3.07) {
												if (x[1] <= -10.11) {
													if (x[0] <= 3.04) {
														if (x[0] <= 3.0) {
															return 2.0f;
														}
														else {
															if (x[0] <= 3.01) {
																if (x[1] <= -10.12) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														if (x[1] <= -10.12) {
															return 0.0f;
														}
														else {
															if (x[0] <= 3.05) {
																return 0.0f;
															}
															else {
																if (x[0] <= 3.06) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[1] <= -10.08) {
													if (x[1] <= -10.1) {
														return 0.0f;
													}
													else {
														if (x[0] <= 3.09) {
															if (x[0] <= 3.08) {
																if (x[1] <= -10.09) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[0] <= 3.12) {
																if (x[0] <= 3.11) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= -10.09) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 3.13) {
														return 2.0f;
													}
													else {
														if (x[1] <= -10.06) {
															return 0.0f;
														}
														else {
															if (x[0] <= 3.17) {
																return 2.0f;
															}
															else {
																if (x[1] <= -10.05) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}

													}

												}

											}

										}
										else {
											if (x[0] <= 3.23) {
												if (x[1] <= -10.04) {
													return 0.0f;
												}
												else {
													if (x[0] <= 3.21) {
														return 2.0f;
													}
													else {
														if (x[1] <= -10.03) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[0] <= 3.52) {
									if (x[1] <= -9.93) {
										if (x[0] <= 3.31) {
											if (x[0] <= 3.25) {
												return 2.0f;
											}
											else {
												if (x[1] <= -10.01) {
													if (x[0] <= 3.29) {
														if (x[0] <= 3.26) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											if (x[1] <= -9.97) {
												if (x[0] <= 3.37) {
													if (x[1] <= -10.0) {
														return 0.0f;
													}
													else {
														if (x[1] <= -9.99) {
															if (x[0] <= 3.33) {
																return 2.0f;
															}
															else {
																if (x[0] <= 3.35) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 3.36) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 3.43) {
													return 2.0f;
												}
												else {
													if (x[1] <= -9.95) {
														return 0.0f;
													}
													else {
														if (x[0] <= 3.49) {
															if (x[1] <= -9.94) {
																if (x[0] <= 3.47) {
																	if (x[0] <= 3.45) {
																		if (x[0] <= 3.44) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= -9.91) {
											if (x[0] <= 3.5) {
												return 2.0f;
											}
											else {
												if (x[0] <= 3.51) {
													if (x[1] <= -9.92) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return 2.0f;
										}

									}

								}
								else {
									if (x[1] <= -9.37) {
										if (x[1] <= -9.74) {
											if (x[0] <= 3.53) {
												if (x[1] <= -9.8) {
													return 0.0f;
												}
												else {
													if (x[1] <= -9.78) {
														if (x[1] <= -9.79) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[0] <= 3.56) {
												if (x[1] <= -9.57) {
													if (x[0] <= 3.54) {
														if (x[0] <= 3.53) {
															return 2.0f;
														}
														else {
															if (x[1] <= -9.65) {
																if (x[1] <= -9.66) {
																	if (x[1] <= -9.72) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -9.71) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= -9.69) {
																				return 2.0f;
																			}
																			else {
																				if (x[1] <= -9.68) {
																					return 0.0f;
																				}
																				else {
																					return 2.0f;
																				}

																			}

																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														if (x[1] <= -9.64) {
															return 0.0f;
														}
														else {
															if (x[0] <= 3.55) {
																if (x[1] <= -9.61) {
																	if (x[1] <= -9.62) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 3.55) {
														return 2.0f;
													}
													else {
														if (x[1] <= -9.51) {
															if (x[1] <= -9.52) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 3.57) {
													if (x[1] <= -9.5) {
														return 0.0f;
													}
													else {
														if (x[1] <= -9.41) {
															if (x[1] <= -9.49) {
																return 2.0f;
															}
															else {
																if (x[1] <= -9.47) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= -9.46) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -9.44) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= -9.42) {
																				return 2.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}

															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= -9.28) {
											if (x[0] <= 3.58) {
												if (x[0] <= 3.57) {
													return 2.0f;
												}
												else {
													if (x[1] <= -9.35) {
														if (x[1] <= -9.36) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}
											else {
												if (x[1] <= -9.31) {
													return 0.0f;
												}
												else {
													if (x[1] <= -9.29) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											return 2.0f;
										}

									}

								}

							}

						}

					}

				}
				else {
					if (x[1] <= -9.24) {
						return 0.0f;
					}
					else {
						if (x[0] <= 3.65) {
							if (x[1] <= -8.94) {
								if (x[0] <= 3.61) {
									if (x[1] <= -9.14) {
										if (x[0] <= 3.6) {
											return 2.0f;
										}
										else {
											if (x[1] <= -9.19) {
												if (x[1] <= -9.2) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										return 2.0f;
									}

								}
								else {
									if (x[1] <= -9.04) {
										if (x[1] <= -9.07) {
											return 0.0f;
										}
										else {
											if (x[0] <= 3.62) {
												if (x[1] <= -9.06) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[0] <= 3.63) {
											if (x[1] <= -9.01) {
												if (x[0] <= 3.62) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 2.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (x[0] <= 3.64) {
									return 2.0f;
								}
								else {
									if (x[1] <= -8.8) {
										if (x[1] <= -8.84) {
											if (x[1] <= -8.89) {
												if (x[1] <= -8.9) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[1] <= -8.82) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										return 2.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= -8.7) {
								if (x[0] <= 3.66) {
									if (x[1] <= -8.77) {
										return 0.0f;
									}
									else {
										if (x[1] <= -8.72) {
											if (x[1] <= -8.76) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 2.0f;
										}

									}

								}
								else {
									if (x[1] <= -8.71) {
										return 0.0f;
									}
									else {
										if (x[0] <= 4.97) {
											return 0.0f;
										}
										else {
											if (x[0] <= 4.99) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[0] <= 4.83) {
									if (x[0] <= 3.67) {
										if (x[0] <= 3.66) {
											return 2.0f;
										}
										else {
											if (x[1] <= -8.69) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[0] <= 5.15) {
										if (x[1] <= -8.67) {
											if (x[0] <= 4.9) {
												return 0.0f;
											}
											else {
												if (x[0] <= 5.03) {
													if (x[1] <= -8.69) {
														if (x[0] <= 5.0) {
															if (x[0] <= 4.92) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[1] <= -8.68) {
														if (x[0] <= 5.09) {
															if (x[0] <= 5.07) {
																return 0.0f;
															}
															else {
																if (x[1] <= -8.69) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 5.12) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 4.87) {
												if (x[1] <= -8.66) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}
											else {
												return 2.0f;
											}

										}

									}
									else {
										if (x[0] <= 5.21) {
											if (x[1] <= -8.66) {
												return 0.0f;
											}
											else {
												if (x[0] <= 5.18) {
													if (x[0] <= 5.17) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[1] <= 4.53) {
					if (x[0] <= 5.59) {
						if (x[1] <= -8.36) {
							if (x[0] <= 3.67) {
								if (x[0] <= 3.66) {
									return 2.0f;
								}
								else {
									if (x[1] <= -8.64) {
										return 0.0f;
									}
									else {
										return 2.0f;
									}

								}

							}
							else {
								if (x[0] <= 4.57) {
									if (x[1] <= -8.5) {
										if (x[0] <= 4.48) {
											if (x[0] <= 3.68) {
												if (x[1] <= -8.57) {
													return 0.0f;
												}
												else {
													if (x[1] <= -8.55) {
														if (x[1] <= -8.56) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[1] <= -8.53) {
												return 0.0f;
											}
											else {
												if (x[1] <= -8.52) {
													if (x[0] <= 4.54) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[0] <= 4.5) {
														if (x[1] <= -8.51) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 4.21) {
											if (x[1] <= -8.4) {
												if (x[0] <= 3.7) {
													if (x[0] <= 3.69) {
														if (x[1] <= -8.48) {
															if (x[0] <= 3.68) {
																return 2.0f;
															}
															else {
																if (x[1] <= -8.49) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[1] <= -8.44) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[0] <= 4.15) {
														return 0.0f;
													}
													else {
														if (x[1] <= -8.42) {
															return 0.0f;
														}
														else {
															if (x[0] <= 4.18) {
																if (x[1] <= -8.41) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 4.04) {
													if (x[0] <= 3.7) {
														return 2.0f;
													}
													else {
														if (x[0] <= 3.95) {
															if (x[0] <= 3.71) {
																if (x[1] <= -8.39) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= -8.37) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= -8.38) {
																return 0.0f;
															}
															else {
																if (x[0] <= 3.98) {
																	if (x[1] <= -8.37) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= -8.39) {
														if (x[0] <= 4.1) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -8.43) {
												if (x[0] <= 4.43) {
													if (x[1] <= -8.47) {
														if (x[0] <= 4.39) {
															return 0.0f;
														}
														else {
															if (x[1] <= -8.48) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														if (x[0] <= 4.32) {
															if (x[1] <= -8.45) {
																return 0.0f;
															}
															else {
																if (x[0] <= 4.25) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 4.28) {
																		if (x[1] <= -8.44) {
																			return 0.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= -8.46) {
																if (x[0] <= 4.36) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												return 2.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= -8.6) {
										if (x[0] <= 4.76) {
											if (x[0] <= 4.73) {
												return 0.0f;
											}
											else {
												if (x[1] <= -8.61) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											if (x[0] <= 5.27) {
												if (x[0] <= 4.83) {
													if (x[1] <= -8.63) {
														if (x[0] <= 4.81) {
															return 0.0f;
														}
														else {
															if (x[1] <= -8.64) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														if (x[0] <= 4.77) {
															if (x[1] <= -8.62) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[0] <= 5.23) {
														return 2.0f;
													}
													else {
														if (x[1] <= -8.64) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -8.62) {
													if (x[0] <= 5.33) {
														if (x[1] <= -8.63) {
															return 0.0f;
														}
														else {
															if (x[0] <= 5.3) {
																if (x[0] <= 5.29) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 5.53) {
														if (x[0] <= 5.35) {
															return 2.0f;
														}
														else {
															if (x[0] <= 5.39) {
																if (x[1] <= -8.61) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 5.36) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 5.38) {
																			return 0.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= -8.61) {
																	if (x[0] <= 5.49) {
																		if (x[0] <= 5.45) {
																			return 2.0f;
																		}
																		else {
																			if (x[0] <= 5.46) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 4.7) {
											if (x[1] <= -8.55) {
												if (x[0] <= 4.61) {
													return 0.0f;
												}
												else {
													if (x[1] <= -8.57) {
														if (x[0] <= 4.66) {
															return 0.0f;
														}
														else {
															if (x[1] <= -8.58) {
																if (x[0] <= 4.69) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= -8.59) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														if (x[0] <= 4.63) {
															if (x[1] <= -8.56) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -8.54) {
													if (x[0] <= 4.59) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											return 2.0f;
										}

									}

								}

							}

						}
						else {
							if (x[0] <= 0.1) {
								if (x[1] <= -1.93) {
									return 2.0f;
								}
								else {
									if (x[1] <= -0.78) {
										if (x[0] <= 0.06) {
											if (x[1] <= -1.73) {
												if (x[0] <= 0.02) {
													if (x[1] <= -1.85) {
														if (x[0] <= 0.01) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 0.03) {
														if (x[1] <= -1.76) {
															if (x[1] <= -1.79) {
																return 2.0f;
															}
															else {
																if (x[1] <= -1.78) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}
											else {
												if (x[1] <= -1.09) {
													if (x[1] <= -1.54) {
														if (x[0] <= 0.04) {
															return 0.0f;
														}
														else {
															if (x[1] <= -1.63) {
																return 2.0f;
															}
															else {
																if (x[0] <= 0.05) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 0.01) {
															if (x[1] <= -1.2) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 0.03) {
														if (x[1] <= -1.0) {
															if (x[0] <= 0.02) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[0] <= 0.04) {
															if (x[1] <= -0.9) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= -1.46) {
												return 2.0f;
											}
											else {
												if (x[0] <= 0.09) {
													if (x[0] <= 0.08) {
														if (x[1] <= -0.84) {
															if (x[1] <= -1.14) {
																if (x[0] <= 0.07) {
																	if (x[1] <= -1.43) {
																		if (x[1] <= -1.44) {
																			return 0.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= -1.33) {
																		if (x[1] <= -1.38) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																if (x[1] <= -0.98) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 0.07) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[1] <= -0.95) {
															if (x[1] <= -1.24) {
																if (x[1] <= -1.26) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[1] <= -0.79) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.67) {
											if (x[1] <= 1.21) {
												if (x[1] <= -0.52) {
													if (x[0] <= 0.05) {
														return 2.0f;
													}
													else {
														if (x[0] <= 0.06) {
															if (x[1] <= -0.64) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[0] <= 0.09) {
																return 2.0f;
															}
															else {
																if (x[1] <= -0.64) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= 1.16) {
														return 2.0f;
													}
													else {
														if (x[0] <= 0.09) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 0.07) {
													if (x[1] <= 1.31) {
														if (x[0] <= 0.06) {
															return 2.0f;
														}
														else {
															if (x[1] <= 1.28) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 1.61) {
															if (x[1] <= 1.38) {
																if (x[0] <= 0.04) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 0.05) {
																		if (x[1] <= 1.34) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 0.04) {
																	if (x[1] <= 1.48) {
																		if (x[0] <= 0.01) {
																			return 2.0f;
																		}
																		else {
																			if (x[1] <= 1.44) {
																				if (x[0] <= 0.02) {
																					return 2.0f;
																				}
																				else {
																					if (x[0] <= 0.03) {
																						if (x[1] <= 1.41) {
																							return 2.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		if (x[1] <= 1.6) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 0.03) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[1] <= 1.5) {
																		if (x[1] <= 1.43) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 0.06) {
																				if (x[1] <= 1.47) {
																					return 0.0f;
																				}
																				else {
																					if (x[0] <= 0.05) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 1.49) {
																							return 2.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}

																				}

																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}
																	else {
																		if (x[1] <= 1.53) {
																			if (x[0] <= 0.05) {
																				if (x[1] <= 1.52) {
																					return 2.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 2.0f;
																			}

																		}
																		else {
																			return 2.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[0] <= 0.02) {
																if (x[0] <= 0.01) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 1.63) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 1.37) {
														if (x[1] <= 1.3) {
															if (x[0] <= 0.08) {
																if (x[1] <= 1.24) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 1.27) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 0.09) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															if (x[0] <= 0.08) {
																return 0.0f;
															}
															else {
																if (x[1] <= 1.33) {
																	if (x[1] <= 1.32) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 0.09) {
																			return 0.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}

																}
																else {
																	return 2.0f;
																}

															}

														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											return 2.0f;
										}

									}

								}

							}
							else {
								if (x[0] <= 0.26) {
									if (x[1] <= -0.8) {
										return 2.0f;
									}
									else {
										if (x[1] <= 1.23) {
											if (x[1] <= 0.37) {
												if (x[0] <= 0.22) {
													return 2.0f;
												}
												else {
													if (x[1] <= -0.74) {
														if (x[0] <= 0.25) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 0.31) {
															if (x[0] <= 0.23) {
																return 2.0f;
															}
															else {
																if (x[1] <= -0.62) {
																	if (x[1] <= -0.64) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 0.25) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= -0.4) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -0.39) {
																			if (x[0] <= 0.25) {
																				return 2.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[1] <= -0.06) {
																				return 2.0f;
																			}
																			else {
																				if (x[1] <= -0.05) {
																					if (x[0] <= 0.24) {
																						return 2.0f;
																					}
																					else {
																						if (x[0] <= 0.25) {
																							return 0.0f;
																						}
																						else {
																							return 2.0f;
																						}

																					}

																				}
																				else {
																					if (x[0] <= 0.24) {
																						if (x[1] <= 0.17) {
																							return 2.0f;
																						}
																						else {
																							if (x[1] <= 0.18) {
																								return 0.0f;
																							}
																							else {
																								return 2.0f;
																							}

																						}

																					}
																					else {
																						return 2.0f;
																					}

																				}

																			}

																		}

																	}

																}

															}

														}
														else {
															if (x[0] <= 0.23) {
																if (x[1] <= 0.33) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 0.22) {
													if (x[1] <= 1.17) {
														if (x[1] <= 0.65) {
															if (x[0] <= 0.18) {
																return 2.0f;
															}
															else {
																if (x[0] <= 0.19) {
																	if (x[1] <= 0.61) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 0.6) {
																		if (x[0] <= 0.21) {
																			if (x[1] <= 0.44) {
																				return 2.0f;
																			}
																			else {
																				if (x[1] <= 0.47) {
																					if (x[1] <= 0.45) {
																						if (x[0] <= 0.2) {
																							return 2.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 2.0f;
																					}

																				}
																				else {
																					if (x[0] <= 0.2) {
																						if (x[1] <= 0.53) {
																							return 2.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						if (x[1] <= 0.53) {
																							return 0.0f;
																						}
																						else {
																							return 2.0f;
																						}

																					}

																				}

																			}

																		}
																		else {
																			if (x[1] <= 0.44) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 0.47) {
																					if (x[1] <= 0.46) {
																						return 2.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}
																				else {
																					return 2.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															if (x[0] <= 0.19) {
																if (x[0] <= 0.15) {
																	if (x[1] <= 0.89) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 0.11) {
																			if (x[1] <= 1.12) {
																				return 2.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[1] <= 1.13) {
																				if (x[1] <= 1.07) {
																					if (x[0] <= 0.12) {
																						if (x[1] <= 1.05) {
																							return 2.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						if (x[1] <= 0.94) {
																							if (x[0] <= 0.14) {
																								return 2.0f;
																							}
																							else {
																								return 0.0f;
																							}

																						}
																						else {
																							if (x[0] <= 0.14) {
																								if (x[1] <= 1.02) {
																									if (x[0] <= 0.13) {
																										if (x[1] <= 1.0) {
																											return 2.0f;
																										}
																										else {
																											return 0.0f;
																										}

																									}
																									else {
																										if (x[1] <= 1.0) {
																											return 0.0f;
																										}
																										else {
																											return 2.0f;
																										}

																									}

																								}
																								else {
																									if (x[0] <= 0.13) {
																										return 0.0f;
																									}
																									else {
																										if (x[1] <= 1.03) {
																											return 0.0f;
																										}
																										else {
																											return 2.0f;
																										}

																									}

																								}

																							}
																							else {
																								if (x[1] <= 0.96) {
																									return 0.0f;
																								}
																								else {
																									return 2.0f;
																								}

																							}

																						}

																					}

																				}
																				else {
																					if (x[0] <= 0.12) {
																						return 0.0f;
																					}
																					else {
																						return 2.0f;
																					}

																				}

																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[1] <= 0.91) {
																		if (x[1] <= 0.84) {
																			if (x[0] <= 0.16) {
																				if (x[1] <= 0.82) {
																					return 2.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				if (x[1] <= 0.78) {
																					if (x[0] <= 0.17) {
																						if (x[1] <= 0.74) {
																							return 2.0f;
																						}
																						else {
																							if (x[1] <= 0.76) {
																								if (x[1] <= 0.75) {
																									return 0.0f;
																								}
																								else {
																									return 2.0f;
																								}

																							}
																							else {
																								return 0.0f;
																							}

																						}

																					}
																					else {
																						if (x[1] <= 0.73) {
																							if (x[1] <= 0.68) {
																								if (x[0] <= 0.18) {
																									return 2.0f;
																								}
																								else {
																									return 0.0f;
																								}

																							}
																							else {
																								return 0.0f;
																							}

																						}
																						else {
																							if (x[0] <= 0.18) {
																								return 0.0f;
																							}
																							else {
																								return 2.0f;
																							}

																						}

																					}

																				}
																				else {
																					if (x[0] <= 0.17) {
																						return 0.0f;
																					}
																					else {
																						return 2.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[0] <= 0.16) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																if (x[1] <= 0.67) {
																	if (x[0] <= 0.2) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 0.11) {
															if (x[1] <= 1.22) {
																if (x[1] <= 1.19) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= 1.2) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											return 2.0f;
										}

									}

								}
								else {
									if (x[1] <= -8.33) {
										if (x[0] <= 3.7) {
											return 2.0f;
										}
										else {
											if (x[0] <= 3.85) {
												if (x[1] <= -8.34) {
													if (x[1] <= -8.35) {
														return 0.0f;
													}
													else {
														if (x[0] <= 3.81) {
															if (x[0] <= 3.71) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[0] <= 3.72) {
														if (x[0] <= 3.71) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}
											else {
												return 2.0f;
											}

										}

									}
									else {
										if (x[1] <= 4.51) {
											return 2.0f;
										}
										else {
											if (x[0] <= 4.87) {
												return 2.0f;
											}
											else {
												if (x[0] <= 4.99) {
													if (x[0] <= 4.95) {
														return 0.0f;
													}
													else {
														if (x[1] <= 4.52) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= -7.12) {
							if (x[0] <= 5.61) {
								if (x[1] <= -7.99) {
									if (x[1] <= -8.6) {
										return 0.0f;
									}
									else {
										if (x[0] <= 5.6) {
											return 2.0f;
										}
										else {
											if (x[1] <= -8.55) {
												if (x[1] <= -8.59) {
													return 2.0f;
												}
												else {
													if (x[1] <= -8.57) {
														return 0.0f;
													}
													else {
														if (x[1] <= -8.56) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -8.19) {
													if (x[1] <= -8.46) {
														return 2.0f;
													}
													else {
														if (x[1] <= -8.45) {
															return 0.0f;
														}
														else {
															if (x[1] <= -8.39) {
																return 2.0f;
															}
															else {
																if (x[1] <= -8.38) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= -8.26) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -8.25) {
																			return 0.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}

																}

															}

														}

													}

												}
												else {
													if (x[1] <= -8.18) {
														return 0.0f;
													}
													else {
														if (x[1] <= -8.09) {
															if (x[1] <= -8.15) {
																if (x[1] <= -8.16) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[1] <= -8.01) {
																if (x[1] <= -8.08) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= -8.06) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -8.04) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= -8.02) {
																				return 2.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}

										}

									}

								}
								else {
									if (x[0] <= 5.6) {
										if (x[1] <= -7.2) {
											if (x[1] <= -7.29) {
												if (x[1] <= -7.96) {
													return 2.0f;
												}
												else {
													if (x[1] <= -7.91) {
														return 0.0f;
													}
													else {
														if (x[1] <= -7.89) {
															return 2.0f;
														}
														else {
															if (x[1] <= -7.31) {
																if (x[1] <= -7.59) {
																	if (x[1] <= -7.88) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= -7.86) {
																			return 2.0f;
																		}
																		else {
																			if (x[1] <= -7.84) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= -7.82) {
																					return 2.0f;
																				}
																				else {
																					if (x[1] <= -7.81) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= -7.79) {
																							return 2.0f;
																						}
																						else {
																							if (x[1] <= -7.78) {
																								return 0.0f;
																							}
																							else {
																								if (x[1] <= -7.76) {
																									return 2.0f;
																								}
																								else {
																									if (x[1] <= -7.74) {
																										return 0.0f;
																									}
																									else {
																										if (x[1] <= -7.72) {
																											return 2.0f;
																										}
																										else {
																											if (x[1] <= -7.71) {
																												return 0.0f;
																											}
																											else {
																												if (x[1] <= -7.69) {
																													return 2.0f;
																												}
																												else {
																													if (x[1] <= -7.68) {
																														return 0.0f;
																													}
																													else {
																														if (x[1] <= -7.66) {
																															return 2.0f;
																														}
																														else {
																															if (x[1] <= -7.65) {
																																return 0.0f;
																															}
																															else {
																																if (x[1] <= -7.62) {
																																	return 2.0f;
																																}
																																else {
																																	if (x[1] <= -7.61) {
																																		return 0.0f;
																																	}
																																	else {
																																		return 2.0f;
																																	}

																																}

																															}

																														}

																													}

																												}

																											}

																										}

																									}

																								}

																							}

																						}

																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[1] <= -7.5) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= -7.39) {
																			if (x[1] <= -7.45) {
																				if (x[1] <= -7.46) {
																					if (x[1] <= -7.48) {
																						if (x[1] <= -7.49) {
																							return 2.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 2.0f;
																					}

																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 2.0f;
																			}

																		}
																		else {
																			if (x[1] <= -7.37) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= -7.36) {
																					return 2.0f;
																				}
																				else {
																					if (x[1] <= -7.34) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= -7.32) {
																							return 2.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}

																				}

																			}

																		}

																	}

																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											return 2.0f;
										}

									}
									else {
										if (x[1] <= -7.19) {
											return 0.0f;
										}
										else {
											return 2.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= -7.19) {
									if (x[0] <= 5.62) {
										if (x[1] <= -8.49) {
											if (x[1] <= -8.5) {
												return 0.0f;
											}
											else {
												return 2.0f;
											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[0] <= 5.72) {
										if (x[0] <= 5.66) {
											if (x[1] <= -7.18) {
												if (x[0] <= 5.64) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 2.0f;
											}

										}
										else {
											if (x[1] <= -7.15) {
												if (x[0] <= 5.68) {
													if (x[1] <= -7.17) {
														return 0.0f;
													}
													else {
														if (x[0] <= 5.67) {
															return 2.0f;
														}
														else {
															if (x[1] <= -7.16) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[1] <= -7.14) {
													if (x[0] <= 5.71) {
														if (x[0] <= 5.68) {
															return 2.0f;
														}
														else {
															if (x[0] <= 5.69) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 3.47) {
								if (x[0] <= 5.78) {
									if (x[1] <= -7.1) {
										if (x[0] <= 5.75) {
											return 2.0f;
										}
										else {
											if (x[0] <= 5.76) {
												if (x[1] <= -7.11) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 3.45) {
											return 2.0f;
										}
										else {
											if (x[0] <= 5.75) {
												return 2.0f;
											}
											else {
												if (x[0] <= 5.76) {
													if (x[1] <= 3.46) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}
												else {
													return 1.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 1.56) {
										if (x[1] <= -5.4) {
											if (x[1] <= -5.66) {
												if (x[1] <= -7.08) {
													if (x[0] <= 5.8) {
														if (x[1] <= -7.1) {
															return 0.0f;
														}
														else {
															if (x[0] <= 5.79) {
																return 2.0f;
															}
															else {
																if (x[1] <= -7.09) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[0] <= 5.8) {
													if (x[1] <= -5.52) {
														return 2.0f;
													}
													else {
														if (x[1] <= -5.44) {
															if (x[0] <= 5.79) {
																return 2.0f;
															}
															else {
																if (x[1] <= -5.49) {
																	if (x[1] <= -5.5) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -5.59) {
														if (x[0] <= 5.81) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											return 2.0f;
										}

									}
									else {
										if (x[1] <= 1.84) {
											if (x[0] <= 5.8) {
												if (x[1] <= 1.69) {
													if (x[0] <= 5.79) {
														if (x[1] <= 1.6) {
															return 1.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[1] <= 1.66) {
															return 1.0f;
														}
														else {
															if (x[1] <= 1.67) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}

													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[1] <= 1.77) {
													return 1.0f;
												}
												else {
													if (x[0] <= 5.81) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 3.42) {
												return 2.0f;
											}
											else {
												if (x[0] <= 5.8) {
													if (x[1] <= 3.44) {
														return 2.0f;
													}
													else {
														if (x[1] <= 3.45) {
															if (x[0] <= 5.79) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													return 1.0f;
												}

											}

										}

									}

								}

							}
							else {
								if (x[0] <= 5.6) {
									if (x[1] <= 4.43) {
										if (x[1] <= 3.55) {
											return 2.0f;
										}
										else {
											if (x[1] <= 3.66) {
												return 1.0f;
											}
											else {
												if (x[1] <= 3.87) {
													if (x[1] <= 3.77) {
														if (x[1] <= 3.75) {
															if (x[1] <= 3.68) {
																return 2.0f;
															}
															else {
																if (x[1] <= 3.73) {
																	if (x[1] <= 3.71) {
																		if (x[1] <= 3.69) {
																			return 1.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 1.0f;
														}

													}
													else {
														if (x[1] <= 3.83) {
															return 2.0f;
														}
														else {
															if (x[1] <= 3.84) {
																return 1.0f;
															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 3.99) {
														return 1.0f;
													}
													else {
														if (x[1] <= 4.35) {
															if (x[1] <= 4.32) {
																if (x[1] <= 4.31) {
																	if (x[1] <= 4.01) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= 4.03) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= 4.09) {
																				return 2.0f;
																			}
																			else {
																				if (x[1] <= 4.29) {
																					if (x[1] <= 4.27) {
																						if (x[1] <= 4.25) {
																							if (x[1] <= 4.23) {
																								if (x[1] <= 4.1) {
																									return 1.0f;
																								}
																								else {
																									if (x[1] <= 4.12) {
																										return 2.0f;
																									}
																									else {
																										if (x[1] <= 4.14) {
																											return 1.0f;
																										}
																										else {
																											if (x[1] <= 4.16) {
																												return 2.0f;
																											}
																											else {
																												if (x[1] <= 4.17) {
																													return 1.0f;
																												}
																												else {
																													if (x[1] <= 4.2) {
																														return 2.0f;
																													}
																													else {
																														if (x[1] <= 4.21) {
																															return 1.0f;
																														}
																														else {
																															return 2.0f;
																														}

																													}

																												}

																											}

																										}

																									}

																								}

																							}
																							else {
																								return 1.0f;
																							}

																						}
																						else {
																							return 2.0f;
																						}

																					}
																					else {
																						return 1.0f;
																					}

																				}
																				else {
																					return 2.0f;
																				}

																			}

																		}

																	}

																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[1] <= 4.4) {
																return 1.0f;
															}
															else {
																if (x[1] <= 4.42) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}

													}

												}

											}

										}

									}
									else {
										return 2.0f;
									}

								}
								else {
									if (x[1] <= 3.55) {
										if (x[0] <= 5.72) {
											if (x[0] <= 5.64) {
												return 2.0f;
											}
											else {
												if (x[1] <= 3.5) {
													if (x[1] <= 3.49) {
														return 2.0f;
													}
													else {
														if (x[0] <= 5.68) {
															return 2.0f;
														}
														else {
															if (x[0] <= 5.69) {
																return 1.0f;
															}
															else {
																if (x[0] <= 5.71) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}

													}

												}
												else {
													if (x[0] <= 5.68) {
														if (x[1] <= 3.53) {
															if (x[0] <= 5.66) {
																return 2.0f;
															}
															else {
																if (x[1] <= 3.51) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 5.67) {
																		if (x[1] <= 3.52) {
																			return 2.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}
																	else {
																		return 1.0f;
																	}

																}

															}

														}
														else {
															return 1.0f;
														}

													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											return 1.0f;
										}

									}
									else {
										if (x[0] <= 5.61) {
											if (x[1] <= 4.43) {
												return 1.0f;
											}
											else {
												if (x[1] <= 4.46) {
													return 2.0f;
												}
												else {
													if (x[1] <= 4.51) {
														if (x[1] <= 4.49) {
															if (x[1] <= 4.47) {
																return 1.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 1.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											return 1.0f;
										}

									}

								}

							}

						}

					}

				}
				else {
					if (x[0] <= 4.0) {
						if (x[1] <= 7.47) {
							if (x[0] <= 3.83) {
								if (x[1] <= 7.44) {
									return 2.0f;
								}
								else {
									if (x[0] <= 3.08) {
										return 2.0f;
									}
									else {
										if (x[0] <= 3.15) {
											if (x[1] <= 7.46) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[0] <= 3.81) {
												return 2.0f;
											}
											else {
												if (x[0] <= 3.82) {
													if (x[1] <= 7.45) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}

							}
							else {
								if (x[1] <= 6.88) {
									if (x[1] <= 6.82) {
										return 2.0f;
									}
									else {
										if (x[0] <= 3.98) {
											return 2.0f;
										}
										else {
											if (x[1] <= 6.84) {
												if (x[0] <= 3.99) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 7.18) {
										if (x[0] <= 3.92) {
											if (x[0] <= 3.9) {
												return 2.0f;
											}
											else {
												if (x[1] <= 7.11) {
													return 2.0f;
												}
												else {
													if (x[1] <= 7.14) {
														if (x[0] <= 3.91) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 3.96) {
												if (x[1] <= 7.04) {
													if (x[0] <= 3.94) {
														return 2.0f;
													}
													else {
														if (x[1] <= 6.96) {
															return 2.0f;
														}
														else {
															if (x[0] <= 3.95) {
																if (x[1] <= 7.01) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 7.07) {
														if (x[0] <= 3.93) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 6.94) {
													if (x[0] <= 3.97) {
														if (x[1] <= 6.91) {
															return 2.0f;
														}
														else {
															if (x[1] <= 6.93) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 3.88) {
											if (x[1] <= 7.3) {
												if (x[0] <= 3.86) {
													return 2.0f;
												}
												else {
													if (x[1] <= 7.22) {
														return 2.0f;
													}
													else {
														if (x[0] <= 3.87) {
															if (x[1] <= 7.28) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= 7.24) {
																if (x[1] <= 7.23) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 3.84) {
													if (x[1] <= 7.41) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 7.31) {
														if (x[0] <= 3.85) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 3.89) {
												if (x[1] <= 7.21) {
													if (x[1] <= 7.19) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[0] <= 2.94) {
								if (x[1] <= 7.83) {
									if (x[0] <= 2.92) {
										if (x[1] <= 7.82) {
											return 2.0f;
										}
										else {
											if (x[0] <= 2.1) {
												return 2.0f;
											}
											else {
												if (x[0] <= 2.13) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 7.78) {
											return 2.0f;
										}
										else {
											if (x[0] <= 2.93) {
												if (x[1] <= 7.81) {
													if (x[1] <= 7.79) {
														return 2.0f;
													}
													else {
														if (x[1] <= 7.8) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 2.08) {
										return 2.0f;
									}
									else {
										if (x[0] <= 2.32) {
											if (x[1] <= 7.87) {
												if (x[0] <= 2.23) {
													if (x[0] <= 2.09) {
														return 2.0f;
													}
													else {
														if (x[1] <= 7.84) {
															if (x[0] <= 2.19) {
																if (x[0] <= 2.1) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 7.85) {
														return 2.0f;
													}
													else {
														if (x[0] <= 2.26) {
															return 0.0f;
														}
														else {
															if (x[0] <= 2.29) {
																if (x[1] <= 7.86) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 2.09) {
													if (x[1] <= 7.88) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 2.89) {
												if (x[0] <= 2.39) {
													if (x[1] <= 7.88) {
														return 2.0f;
													}
													else {
														if (x[0] <= 2.35) {
															return 0.0f;
														}
														else {
															if (x[1] <= 7.9) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[0] <= 2.91) {
													if (x[1] <= 7.86) {
														return 2.0f;
													}
													else {
														if (x[1] <= 7.88) {
															if (x[0] <= 2.9) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 7.84) {
														if (x[0] <= 2.92) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}

								}

							}
							else {
								if (x[1] <= 7.61) {
									if (x[0] <= 3.81) {
										if (x[0] <= 3.52) {
											if (x[0] <= 3.05) {
												if (x[0] <= 3.02) {
													return 2.0f;
												}
												else {
													if (x[1] <= 7.56) {
														return 2.0f;
													}
													else {
														if (x[1] <= 7.59) {
															if (x[0] <= 3.03) {
																return 2.0f;
															}
															else {
																if (x[1] <= 7.57) {
																	if (x[0] <= 3.04) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 7.52) {
													if (x[0] <= 3.31) {
														if (x[0] <= 3.07) {
															if (x[1] <= 7.51) {
																return 2.0f;
															}
															else {
																if (x[0] <= 3.06) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 7.48) {
																if (x[0] <= 3.19) {
																	if (x[0] <= 3.08) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}
															else {
																if (x[0] <= 3.28) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 7.49) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 7.5) {
															return 2.0f;
														}
														else {
															if (x[0] <= 3.42) {
																if (x[0] <= 3.37) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 7.51) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 3.47) {
														if (x[0] <= 3.06) {
															if (x[1] <= 7.53) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 7.55) {
															if (x[0] <= 3.49) {
																if (x[1] <= 7.53) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 7.57) {
												if (x[0] <= 3.79) {
													if (x[1] <= 7.56) {
														return 2.0f;
													}
													else {
														if (x[0] <= 3.55) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[1] <= 7.54) {
														if (x[0] <= 3.8) {
															return 2.0f;
														}
														else {
															if (x[1] <= 7.51) {
																if (x[1] <= 7.49) {
																	if (x[1] <= 7.48) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 3.62) {
													if (x[1] <= 7.58) {
														if (x[0] <= 3.59) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 3.78) {
														if (x[0] <= 3.69) {
															if (x[1] <= 7.59) {
																return 2.0f;
															}
															else {
																if (x[1] <= 7.6) {
																	if (x[0] <= 3.65) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[1] <= 7.58) {
															if (x[0] <= 3.79) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[0] <= 3.82) {
											if (x[1] <= 7.48) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[0] <= 3.0) {
										if (x[1] <= 7.74) {
											if (x[0] <= 2.96) {
												return 2.0f;
											}
											else {
												if (x[1] <= 7.69) {
													if (x[0] <= 2.99) {
														if (x[1] <= 7.68) {
															return 2.0f;
														}
														else {
															if (x[0] <= 2.98) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 7.64) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 2.97) {
														if (x[1] <= 7.71) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 7.76) {
												if (x[0] <= 2.95) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 7.63) {
											if (x[0] <= 3.72) {
												if (x[0] <= 3.01) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 3.77) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= 5.18) {
							if (x[0] <= 4.8) {
								if (x[1] <= 4.9) {
									if (x[1] <= 4.87) {
										return 2.0f;
									}
									else {
										if (x[0] <= 4.15) {
											if (x[1] <= 4.89) {
												if (x[0] <= 4.1) {
													if (x[1] <= 4.88) {
														if (x[0] <= 4.04) {
															return 1.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 1.0f;
													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											return 2.0f;
										}

									}

								}
								else {
									if (x[0] <= 4.43) {
										if (x[1] <= 4.98) {
											if (x[0] <= 4.24) {
												if (x[0] <= 4.18) {
													return 1.0f;
												}
												else {
													if (x[1] <= 4.92) {
														if (x[0] <= 4.21) {
															if (x[1] <= 4.91) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												if (x[1] <= 4.95) {
													if (x[0] <= 4.28) {
														if (x[1] <= 4.93) {
															return 2.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[0] <= 4.37) {
														if (x[1] <= 4.96) {
															if (x[0] <= 4.32) {
																return 1.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 1.0f;
														}

													}
													else {
														if (x[0] <= 4.39) {
															if (x[1] <= 4.97) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}

										}
										else {
											return 1.0f;
										}

									}
									else {
										if (x[1] <= 5.05) {
											if (x[1] <= 5.0) {
												return 2.0f;
											}
											else {
												if (x[0] <= 4.57) {
													if (x[0] <= 4.48) {
														return 1.0f;
													}
													else {
														if (x[1] <= 5.02) {
															if (x[0] <= 4.5) {
																if (x[1] <= 5.01) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[0] <= 4.54) {
																return 1.0f;
															}
															else {
																if (x[1] <= 5.03) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 4.56) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 5.04) {
																			return 2.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}

															}

														}

													}

												}
												else {
													if (x[0] <= 4.79) {
														return 2.0f;
													}
													else {
														if (x[1] <= 5.02) {
															if (x[1] <= 5.01) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 4.64) {
												if (x[1] <= 5.07) {
													if (x[0] <= 4.59) {
														return 1.0f;
													}
													else {
														if (x[0] <= 4.61) {
															if (x[1] <= 5.06) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 1.0f;
												}

											}
											else {
												if (x[1] <= 5.11) {
													if (x[0] <= 4.7) {
														if (x[1] <= 5.09) {
															if (x[1] <= 5.08) {
																return 2.0f;
															}
															else {
																if (x[0] <= 4.66) {
																	return 1.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															if (x[0] <= 4.69) {
																return 1.0f;
															}
															else {
																if (x[1] <= 5.1) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 4.79) {
															return 2.0f;
														}
														else {
															if (x[1] <= 5.06) {
																return 2.0f;
															}
															else {
																if (x[1] <= 5.1) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}

													}

												}
												else {
													if (x[0] <= 4.78) {
														if (x[0] <= 4.73) {
															return 1.0f;
														}
														else {
															if (x[1] <= 5.12) {
																return 2.0f;
															}
															else {
																if (x[0] <= 4.76) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 5.15) {
																		if (x[1] <= 5.14) {
																			return 2.0f;
																		}
																		else {
																			if (x[0] <= 4.77) {
																				return 1.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}
																	else {
																		return 1.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 5.15) {
															if (x[0] <= 4.79) {
																if (x[1] <= 5.14) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}

									}

								}

							}
							else {
								if (x[0] <= 5.61) {
									if (x[1] <= 4.66) {
										if (x[0] <= 5.35) {
											if (x[0] <= 4.86) {
												if (x[0] <= 4.85) {
													return 2.0f;
												}
												else {
													if (x[1] <= 4.62) {
														return 2.0f;
													}
													else {
														if (x[1] <= 4.64) {
															if (x[1] <= 4.63) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 4.57) {
													if (x[0] <= 5.12) {
														if (x[0] <= 4.87) {
															return 2.0f;
														}
														else {
															if (x[0] <= 5.09) {
																return 0.0f;
															}
															else {
																if (x[1] <= 4.54) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 4.55) {
															return 2.0f;
														}
														else {
															if (x[0] <= 5.24) {
																if (x[0] <= 5.18) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 4.56) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 5.29) {
														if (x[0] <= 4.87) {
															if (x[1] <= 4.61) {
																if (x[1] <= 4.58) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= 4.6) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 4.6) {
															if (x[0] <= 5.32) {
																if (x[1] <= 4.58) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 4.61) {
												if (x[0] <= 5.6) {
													return 2.0f;
												}
												else {
													if (x[1] <= 4.55) {
														return 1.0f;
													}
													else {
														return 2.0f;
													}

												}

											}
											else {
												if (x[0] <= 5.49) {
													if (x[1] <= 4.63) {
														if (x[0] <= 5.42) {
															if (x[1] <= 4.62) {
																if (x[0] <= 5.38) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[0] <= 5.46) {
															return 0.0f;
														}
														else {
															if (x[1] <= 4.64) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 4.65) {
														if (x[0] <= 5.6) {
															return 2.0f;
														}
														else {
															if (x[1] <= 4.62) {
																return 1.0f;
															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														if (x[0] <= 5.53) {
															return 0.0f;
														}
														else {
															if (x[0] <= 5.6) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= 5.11) {
											if (x[0] <= 4.84) {
												if (x[1] <= 4.91) {
													if (x[0] <= 4.82) {
														if (x[1] <= 4.84) {
															return 2.0f;
														}
														else {
															if (x[1] <= 4.86) {
																if (x[0] <= 4.81) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														if (x[1] <= 4.81) {
															if (x[1] <= 4.74) {
																return 2.0f;
															}
															else {
																if (x[0] <= 4.83) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 4.81) {
														if (x[1] <= 4.98) {
															if (x[1] <= 4.94) {
																return 2.0f;
															}
															else {
																if (x[1] <= 4.95) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 5.57) {
													if (x[0] <= 4.85) {
														if (x[1] <= 4.68) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 4.68) {
														return 2.0f;
													}
													else {
														if (x[0] <= 5.6) {
															return 0.0f;
														}
														else {
															if (x[1] <= 5.08) {
																if (x[1] <= 4.92) {
																	if (x[1] <= 4.91) {
																		if (x[1] <= 4.87) {
																			if (x[1] <= 4.73) {
																				if (x[1] <= 4.72) {
																					return 0.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[1] <= 4.88) {
																				return 0.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 5.1) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}

											}

										}
										else {
											if (x[0] <= 5.27) {
												if (x[1] <= 5.16) {
													if (x[0] <= 4.81) {
														if (x[1] <= 5.15) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 5.23) {
														if (x[0] <= 4.83) {
															return 0.0f;
														}
														else {
															if (x[0] <= 5.17) {
																return 0.0f;
															}
															else {
																if (x[1] <= 5.17) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 5.21) {
																		if (x[0] <= 5.18) {
																			return 0.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 5.14) {
													if (x[0] <= 5.49) {
														if (x[0] <= 5.35) {
															return 0.0f;
														}
														else {
															if (x[0] <= 5.39) {
																if (x[1] <= 5.12) {
																	if (x[0] <= 5.36) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 5.38) {
																			return 0.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 5.45) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 5.46) {
																		if (x[1] <= 5.12) {
																			return 0.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[0] <= 5.53) {
															if (x[1] <= 5.12) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 5.33) {
														if (x[1] <= 5.15) {
															if (x[0] <= 5.3) {
																if (x[0] <= 5.29) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}

								}
								else {
									if (x[1] <= 4.75) {
										if (x[1] <= 4.7) {
											if (x[0] <= 5.62) {
												if (x[1] <= 4.69) {
													return 1.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[0] <= 5.73) {
												if (x[1] <= 4.73) {
													if (x[0] <= 5.67) {
														if (x[1] <= 4.71) {
															if (x[0] <= 5.64) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 4.72) {
															return 1.0f;
														}
														else {
															if (x[0] <= 5.7) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 5.74) {
													if (x[1] <= 4.74) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 1.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 4.77) {
											if (x[0] <= 5.76) {
												return 0.0f;
											}
											else {
												if (x[1] <= 4.76) {
													return 1.0f;
												}
												else {
													if (x[0] <= 5.8) {
														return 0.0f;
													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 5.62) {
												if (x[1] <= 4.99) {
													return 0.0f;
												}
												else {
													if (x[1] <= 5.0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[0] <= 4.74) {
								if (x[1] <= 6.4) {
									if (x[0] <= 4.64) {
										if (x[1] <= 6.28) {
											if (x[0] <= 4.61) {
												return 1.0f;
											}
											else {
												if (x[1] <= 6.14) {
													return 1.0f;
												}
												else {
													if (x[1] <= 6.25) {
														if (x[0] <= 4.63) {
															return 1.0f;
														}
														else {
															if (x[1] <= 6.21) {
																if (x[1] <= 6.15) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 6.18) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 6.19) {
																			return 0.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 6.23) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 6.24) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[0] <= 4.62) {
															if (x[1] <= 6.26) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 4.33) {
												if (x[0] <= 4.32) {
													return 1.0f;
												}
												else {
													if (x[1] <= 6.39) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 6.35) {
													if (x[0] <= 4.48) {
														if (x[0] <= 4.46) {
															return 1.0f;
														}
														else {
															if (x[1] <= 6.34) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 6.32) {
															if (x[0] <= 4.58) {
																if (x[0] <= 4.53) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 6.3) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 4.54) {
																			if (x[1] <= 6.31) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 4.42) {
														if (x[1] <= 6.37) {
															if (x[0] <= 4.4) {
																return 1.0f;
															}
															else {
																if (x[1] <= 6.36) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 4.34) {
																if (x[1] <= 6.38) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 5.74) {
											if (x[0] <= 4.7) {
												return 1.0f;
											}
											else {
												if (x[1] <= 5.48) {
													return 1.0f;
												}
												else {
													if (x[1] <= 5.64) {
														if (x[0] <= 4.73) {
															if (x[0] <= 4.71) {
																return 1.0f;
															}
															else {
																if (x[1] <= 5.59) {
																	if (x[0] <= 4.72) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 5.51) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= 5.52) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 5.54) {
																					return 1.0f;
																				}
																				else {
																					if (x[1] <= 5.56) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 5.58) {
																							return 1.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[1] <= 5.61) {
																		if (x[0] <= 4.72) {
																			if (x[1] <= 5.6) {
																				return 0.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 4.69) {
												if (x[1] <= 6.06) {
													if (x[0] <= 4.66) {
														return 1.0f;
													}
													else {
														if (x[1] <= 5.95) {
															if (x[1] <= 5.84) {
																if (x[1] <= 5.81) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 4.68) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 5.82) {
																			return 0.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}

															}
															else {
																if (x[0] <= 4.68) {
																	if (x[0] <= 4.67) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 5.88) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= 5.89) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 5.91) {
																					return 1.0f;
																				}
																				else {
																					if (x[1] <= 5.93) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 5.94) {
																							return 1.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}

																				}

																			}

																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 4.67) {
																if (x[1] <= 6.0) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 6.01) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 6.11) {
														if (x[0] <= 4.65) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 6.78) {
										if (x[0] <= 4.24) {
											if (x[1] <= 6.5) {
												if (x[0] <= 4.14) {
													return 1.0f;
												}
												else {
													if (x[1] <= 6.45) {
														if (x[0] <= 4.22) {
															return 1.0f;
														}
														else {
															if (x[1] <= 6.44) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 4.19) {
															if (x[1] <= 6.48) {
																if (x[0] <= 4.17) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 6.46) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 4.18) {
																			if (x[1] <= 6.47) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 4.07) {
													if (x[1] <= 6.64) {
														if (x[0] <= 4.06) {
															return 1.0f;
														}
														else {
															if (x[1] <= 6.58) {
																return 1.0f;
															}
															else {
																if (x[1] <= 6.61) {
																	if (x[1] <= 6.6) {
																		return 0.0f;
																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 4.03) {
															if (x[1] <= 6.74) {
																return 1.0f;
															}
															else {
																if (x[0] <= 4.02) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 6.7) {
																if (x[0] <= 4.04) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 4.05) {
																		if (x[1] <= 6.66) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 4.09) {
														if (x[1] <= 6.54) {
															if (x[0] <= 4.08) {
																return 1.0f;
															}
															else {
																if (x[1] <= 6.51) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 6.42) {
												if (x[0] <= 4.29) {
													if (x[0] <= 4.27) {
														return 1.0f;
													}
													else {
														if (x[1] <= 6.41) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[0] <= 4.01) {
											if (x[1] <= 6.81) {
												return 1.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 5.23) {
									if (x[0] <= 5.15) {
										if (x[0] <= 4.88) {
											if (x[0] <= 4.78) {
												if (x[0] <= 4.77) {
													return 1.0f;
												}
												else {
													if (x[1] <= 5.21) {
														if (x[1] <= 5.19) {
															return 0.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[1] <= 5.2) {
												if (x[0] <= 5.12) {
													if (x[0] <= 4.9) {
														if (x[1] <= 5.19) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 5.19) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 5.03) {
													if (x[1] <= 5.21) {
														if (x[0] <= 4.9) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 4.92) {
															return 0.0f;
														}
														else {
															if (x[0] <= 4.99) {
																if (x[1] <= 5.22) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 4.97) {
																		return 0.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 5.21) {
														if (x[0] <= 5.09) {
															if (x[0] <= 5.07) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[0] <= 4.77) {
										if (x[1] <= 5.4) {
											if (x[0] <= 4.75) {
												return 1.0f;
											}
											else {
												if (x[1] <= 5.31) {
													if (x[1] <= 5.28) {
														if (x[0] <= 4.76) {
															return 1.0f;
														}
														else {
															if (x[1] <= 5.25) {
																return 1.0f;
															}
															else {
																if (x[1] <= 5.26) {
																	return 0.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 4.76) {
															if (x[1] <= 5.29) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 5.44) {
												if (x[1] <= 5.43) {
													return 0.0f;
												}
												else {
													if (x[0] <= 4.75) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 5.24) {
											if (x[0] <= 4.78) {
												return 1.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}

						}

					}

				}

			}

		}
		else {
			if (x[0] <= 1.91) {
				if (x[1] <= 10.51) {
					if (x[0] <= 1.32) {
						if (x[1] <= 10.16) {
							if (x[1] <= 10.11) {
								return 2.0f;
							}
							else {
								if (x[0] <= 1.29) {
									return 2.0f;
								}
								else {
									if (x[1] <= 10.14) {
										if (x[0] <= 1.31) {
											if (x[1] <= 10.13) {
												return 2.0f;
											}
											else {
												if (x[0] <= 1.3) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[0] <= 1.17) {
								if (x[1] <= 10.41) {
									if (x[0] <= 1.15) {
										return 2.0f;
									}
									else {
										if (x[1] <= 10.38) {
											return 2.0f;
										}
										else {
											if (x[1] <= 10.39) {
												if (x[0] <= 1.16) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 0.35) {
										return 2.0f;
									}
									else {
										if (x[0] <= 0.72) {
											if (x[1] <= 10.45) {
												if (x[0] <= 0.61) {
													if (x[1] <= 10.43) {
														if (x[0] <= 0.5) {
															if (x[0] <= 0.4) {
																return 2.0f;
															}
															else {
																if (x[0] <= 0.46) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 10.42) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[0] <= 0.38) {
															return 2.0f;
														}
														else {
															if (x[0] <= 0.59) {
																if (x[0] <= 0.39) {
																	if (x[1] <= 10.44) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 10.44) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[0] <= 0.38) {
													if (x[1] <= 10.48) {
														if (x[0] <= 0.37) {
															return 2.0f;
														}
														else {
															if (x[1] <= 10.46) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 0.67) {
														return 0.0f;
													}
													else {
														if (x[1] <= 10.46) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 1.11) {
												if (x[0] <= 0.78) {
													if (x[1] <= 10.47) {
														return 2.0f;
													}
													else {
														if (x[0] <= 0.77) {
															return 0.0f;
														}
														else {
															if (x[1] <= 10.48) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 10.48) {
														return 2.0f;
													}
													else {
														if (x[0] <= 1.09) {
															if (x[0] <= 0.81) {
																if (x[1] <= 10.5) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[1] <= 10.49) {
																if (x[0] <= 1.1) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 1.14) {
													if (x[1] <= 10.46) {
														if (x[1] <= 10.43) {
															return 2.0f;
														}
														else {
															if (x[0] <= 1.12) {
																return 2.0f;
															}
															else {
																if (x[1] <= 10.44) {
																	if (x[0] <= 1.13) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}

							}
							else {
								if (x[1] <= 10.31) {
									if (x[0] <= 1.25) {
										if (x[1] <= 10.24) {
											if (x[0] <= 1.24) {
												return 2.0f;
											}
											else {
												if (x[1] <= 10.23) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 1.2) {
												return 2.0f;
											}
											else {
												if (x[1] <= 10.28) {
													if (x[0] <= 1.21) {
														return 2.0f;
													}
													else {
														if (x[0] <= 1.23) {
															if (x[1] <= 10.26) {
																if (x[0] <= 1.22) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= 10.25) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 10.21) {
											if (x[0] <= 1.27) {
												if (x[1] <= 10.19) {
													return 2.0f;
												}
												else {
													if (x[0] <= 1.26) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 1.28) {
													if (x[1] <= 10.17) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[0] <= 1.19) {
										if (x[1] <= 10.36) {
											if (x[1] <= 10.34) {
												return 2.0f;
											}
											else {
												if (x[0] <= 1.18) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 9.34) {
							if (x[0] <= 1.69) {
								if (x[1] <= 9.21) {
									return 2.0f;
								}
								else {
									if (x[0] <= 1.65) {
										return 2.0f;
									}
									else {
										if (x[0] <= 1.67) {
											if (x[1] <= 9.28) {
												return 2.0f;
											}
											else {
												if (x[0] <= 1.66) {
													if (x[1] <= 9.31) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 9.24) {
												if (x[0] <= 1.68) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 8.71) {
									if (x[1] <= 8.48) {
										return 2.0f;
									}
									else {
										if (x[0] <= 1.85) {
											if (x[0] <= 1.84) {
												return 2.0f;
											}
											else {
												if (x[1] <= 8.68) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 8.61) {
												if (x[0] <= 1.88) {
													if (x[1] <= 8.58) {
														return 2.0f;
													}
													else {
														if (x[0] <= 1.87) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 8.54) {
														if (x[0] <= 1.89) {
															return 2.0f;
														}
														else {
															if (x[0] <= 1.9) {
																if (x[1] <= 8.51) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 1.86) {
													if (x[1] <= 8.64) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[0] <= 1.8) {
										if (x[1] <= 9.01) {
											if (x[0] <= 1.75) {
												return 2.0f;
											}
											else {
												if (x[1] <= 8.88) {
													if (x[0] <= 1.79) {
														return 2.0f;
													}
													else {
														if (x[1] <= 8.84) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 1.78) {
														if (x[1] <= 8.94) {
															if (x[0] <= 1.77) {
																return 2.0f;
															}
															else {
																if (x[1] <= 8.91) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 1.76) {
																if (x[1] <= 8.98) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 1.74) {
												if (x[1] <= 9.14) {
													if (x[0] <= 1.71) {
														return 2.0f;
													}
													else {
														if (x[1] <= 9.08) {
															if (x[0] <= 1.73) {
																return 2.0f;
															}
															else {
																if (x[1] <= 9.04) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 1.72) {
																if (x[1] <= 9.11) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 1.7) {
														if (x[1] <= 9.18) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 8.81) {
											if (x[0] <= 1.83) {
												if (x[0] <= 1.81) {
													return 2.0f;
												}
												else {
													if (x[1] <= 8.74) {
														return 2.0f;
													}
													else {
														if (x[0] <= 1.82) {
															if (x[1] <= 8.78) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}

						}
						else {
							if (x[0] <= 1.61) {
								if (x[1] <= 9.91) {
									if (x[0] <= 1.48) {
										if (x[1] <= 9.83) {
											return 2.0f;
										}
										else {
											if (x[0] <= 1.44) {
												return 2.0f;
											}
											else {
												if (x[0] <= 1.46) {
													if (x[1] <= 9.86) {
														return 2.0f;
													}
													else {
														if (x[0] <= 1.45) {
															if (x[1] <= 9.89) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 9.84) {
														if (x[0] <= 1.47) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 9.64) {
											if (x[0] <= 1.56) {
												return 2.0f;
											}
											else {
												if (x[1] <= 9.51) {
													if (x[1] <= 9.48) {
														return 2.0f;
													}
													else {
														if (x[0] <= 1.6) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 1.59) {
														if (x[1] <= 9.58) {
															if (x[0] <= 1.58) {
																return 2.0f;
															}
															else {
																if (x[1] <= 9.54) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 1.57) {
																if (x[1] <= 9.61) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 1.55) {
												if (x[1] <= 9.78) {
													if (x[0] <= 1.52) {
														if (x[1] <= 9.77) {
															return 2.0f;
														}
														else {
															if (x[0] <= 1.51) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 9.71) {
															if (x[0] <= 1.54) {
																return 2.0f;
															}
															else {
																if (x[1] <= 9.68) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 1.53) {
																if (x[1] <= 9.74) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 9.81) {
														if (x[0] <= 1.5) {
															if (x[0] <= 1.49) {
																return 2.0f;
															}
															else {
																if (x[1] <= 9.79) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 10.08) {
										if (x[0] <= 1.42) {
											if (x[1] <= 9.99) {
												if (x[0] <= 1.39) {
													return 2.0f;
												}
												else {
													if (x[1] <= 9.94) {
														return 2.0f;
													}
													else {
														if (x[0] <= 1.41) {
															if (x[1] <= 9.96) {
																return 2.0f;
															}
															else {
																if (x[0] <= 1.4) {
																	if (x[1] <= 9.98) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 1.36) {
													if (x[1] <= 10.04) {
														return 2.0f;
													}
													else {
														if (x[0] <= 1.34) {
															return 2.0f;
														}
														else {
															if (x[0] <= 1.35) {
																if (x[1] <= 10.06) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 1.38) {
														if (x[1] <= 10.02) {
															if (x[1] <= 10.01) {
																return 2.0f;
															}
															else {
																if (x[0] <= 1.37) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[1] <= 10.09) {
											if (x[0] <= 1.33) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 9.44) {
									if (x[0] <= 1.64) {
										if (x[1] <= 9.38) {
											return 2.0f;
										}
										else {
											if (x[0] <= 1.62) {
												return 2.0f;
											}
											else {
												if (x[0] <= 1.63) {
													if (x[1] <= 9.41) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									return 0.0f;
								}

							}

						}

					}

				}
				else {
					if (x[1] <= 10.91) {
						if (x[0] <= 0.26) {
							if (x[1] <= 10.69) {
								if (x[0] <= 0.2) {
									return 2.0f;
								}
								else {
									if (x[1] <= 10.63) {
										if (x[0] <= 0.25) {
											return 2.0f;
										}
										else {
											if (x[1] <= 10.61) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[0] <= 0.22) {
											if (x[1] <= 10.66) {
												return 2.0f;
											}
											else {
												if (x[0] <= 0.21) {
													if (x[1] <= 10.68) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 10.64) {
												if (x[0] <= 0.24) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[0] <= 0.14) {
									if (x[1] <= 10.81) {
										if (x[0] <= 0.12) {
											return 2.0f;
										}
										else {
											if (x[1] <= 10.78) {
												return 2.0f;
											}
											else {
												if (x[1] <= 10.79) {
													if (x[0] <= 0.13) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 0.08) {
											if (x[1] <= 10.88) {
												if (x[0] <= 0.07) {
													return 2.0f;
												}
												else {
													if (x[1] <= 10.86) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 0.04) {
													return 2.0f;
												}
												else {
													if (x[0] <= 0.05) {
														if (x[1] <= 10.89) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 10.84) {
												if (x[0] <= 0.1) {
													if (x[1] <= 10.83) {
														return 2.0f;
													}
													else {
														if (x[0] <= 0.09) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 10.76) {
										if (x[0] <= 0.19) {
											if (x[1] <= 10.71) {
												return 2.0f;
											}
											else {
												if (x[0] <= 0.17) {
													if (x[1] <= 10.73) {
														return 2.0f;
													}
													else {
														if (x[0] <= 0.15) {
															return 2.0f;
														}
														else {
															if (x[1] <= 10.74) {
																if (x[0] <= 0.16) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 10.58) {
								if (x[0] <= 1.08) {
									if (x[0] <= 0.9) {
										if (x[0] <= 0.32) {
											if (x[0] <= 0.29) {
												return 2.0f;
											}
											else {
												if (x[1] <= 10.54) {
													return 2.0f;
												}
												else {
													if (x[0] <= 0.3) {
														if (x[1] <= 10.56) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 0.83) {
												if (x[0] <= 0.33) {
													if (x[1] <= 10.52) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[1] <= 10.53) {
													if (x[1] <= 10.52) {
														return 2.0f;
													}
													else {
														if (x[0] <= 0.87) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 10.55) {
											if (x[0] <= 1.06) {
												if (x[0] <= 0.92) {
													if (x[1] <= 10.54) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[1] <= 10.53) {
													return 2.0f;
												}
												else {
													if (x[0] <= 1.07) {
														if (x[1] <= 10.54) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 0.96) {
												return 0.0f;
											}
											else {
												if (x[0] <= 1.06) {
													if (x[0] <= 0.99) {
														if (x[1] <= 10.56) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 1.05) {
															return 2.0f;
														}
														else {
															if (x[1] <= 10.56) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[0] <= 0.27) {
									if (x[1] <= 10.59) {
										return 2.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									return 0.0f;
								}

							}

						}

					}
					else {
						if (x[0] <= 0.03) {
							if (x[1] <= 10.96) {
								if (x[1] <= 10.93) {
									return 2.0f;
								}
								else {
									if (x[0] <= 0.01) {
										return 2.0f;
									}
									else {
										if (x[1] <= 10.94) {
											if (x[0] <= 0.02) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								return 0.0f;
							}

						}
						else {
							return 0.0f;
						}

					}

				}

			}
			else {
				if (x[1] <= 8.38) {
					if (x[0] <= 2.88) {
						if (x[0] <= 2.02) {
							if (x[1] <= 8.14) {
								if (x[0] <= 2.01) {
									return 2.0f;
								}
								else {
									if (x[1] <= 8.11) {
										return 2.0f;
									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (x[0] <= 1.97) {
									if (x[1] <= 8.28) {
										return 2.0f;
									}
									else {
										if (x[0] <= 1.94) {
											return 2.0f;
										}
										else {
											if (x[1] <= 8.34) {
												if (x[0] <= 1.95) {
													return 2.0f;
												}
												else {
													if (x[0] <= 1.96) {
														if (x[1] <= 8.31) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 8.24) {
										if (x[0] <= 2.0) {
											if (x[1] <= 8.18) {
												return 2.0f;
											}
											else {
												if (x[0] <= 1.98) {
													return 2.0f;
												}
												else {
													if (x[0] <= 1.99) {
														if (x[1] <= 8.21) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 8.07) {
								if (x[0] <= 2.59) {
									if (x[0] <= 2.06) {
										if (x[1] <= 7.98) {
											return 2.0f;
										}
										else {
											if (x[0] <= 2.04) {
												if (x[1] <= 8.04) {
													return 2.0f;
												}
												else {
													if (x[0] <= 2.03) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 8.01) {
													if (x[0] <= 2.05) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 2.45) {
											if (x[1] <= 7.94) {
												if (x[0] <= 2.07) {
													return 2.0f;
												}
												else {
													if (x[0] <= 2.43) {
														return 0.0f;
													}
													else {
														if (x[1] <= 7.92) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[1] <= 7.97) {
												if (x[1] <= 7.95) {
													if (x[0] <= 2.48) {
														if (x[1] <= 7.93) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[0] <= 2.53) {
														return 0.0f;
													}
													else {
														if (x[0] <= 2.55) {
															if (x[1] <= 7.96) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 8.01) {
										if (x[0] <= 2.85) {
											if (x[0] <= 2.63) {
												if (x[1] <= 7.98) {
													return 2.0f;
												}
												else {
													if (x[1] <= 8.0) {
														if (x[0] <= 2.61) {
															if (x[0] <= 2.6) {
																return 0.0f;
															}
															else {
																if (x[1] <= 7.99) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 2.0f;
											}

										}
										else {
											if (x[1] <= 7.94) {
												if (x[0] <= 2.87) {
													return 2.0f;
												}
												else {
													if (x[1] <= 7.93) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 2.86) {
													if (x[1] <= 7.98) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 2.67) {
											if (x[1] <= 8.02) {
												if (x[0] <= 2.64) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[0] <= 2.83) {
												if (x[0] <= 2.72) {
													if (x[1] <= 8.04) {
														if (x[1] <= 8.03) {
															return 2.0f;
														}
														else {
															if (x[0] <= 2.69) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														if (x[0] <= 2.71) {
															return 0.0f;
														}
														else {
															if (x[1] <= 8.05) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 8.06) {
														return 2.0f;
													}
													else {
														if (x[0] <= 2.75) {
															return 0.0f;
														}
														else {
															if (x[0] <= 2.82) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 8.1) {
									if (x[0] <= 2.77) {
										if (x[0] <= 2.03) {
											if (x[1] <= 8.08) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[0] <= 2.82) {
											if (x[1] <= 8.09) {
												if (x[0] <= 2.81) {
													return 2.0f;
												}
												else {
													if (x[1] <= 8.08) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 2.8) {
													if (x[0] <= 2.78) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									return 0.0f;
								}

							}

						}

					}
					else {
						return 0.0f;
					}

				}
				else {
					if (x[0] <= 1.93) {
						if (x[1] <= 8.44) {
							if (x[0] <= 1.92) {
								return 2.0f;
							}
							else {
								if (x[1] <= 8.41) {
									return 2.0f;
								}
								else {
									return 0.0f;
								}

							}

						}
						else {
							return 0.0f;
						}

					}
					else {
						return 0.0f;
					}

				}

			}

		}

	}
	else {
		if (x[0] <= 7.7) {
			if (x[1] <= 1.87) {
				if (x[1] <= -5.66) {
					if (x[1] <= -7.08) {
						return 0.0f;
					}
					else {
						if (x[0] <= 6.0) {
							if (x[1] <= -6.24) {
								if (x[0] <= 5.93) {
									if (x[1] <= -7.05) {
										if (x[0] <= 5.86) {
											return 2.0f;
										}
										else {
											if (x[1] <= -7.07) {
												return 0.0f;
											}
											else {
												if (x[0] <= 5.88) {
													return 2.0f;
												}
												else {
													if (x[1] <= -7.06) {
														return 0.0f;
													}
													else {
														if (x[0] <= 5.92) {
															if (x[0] <= 5.9) {
																if (x[0] <= 5.89) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}

									}
									else {
										return 2.0f;
									}

								}
								else {
									if (x[1] <= -6.51) {
										if (x[1] <= -7.03) {
											return 0.0f;
										}
										else {
											if (x[0] <= 5.98) {
												if (x[1] <= -6.54) {
													return 2.0f;
												}
												else {
													if (x[0] <= 5.97) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= -6.66) {
													if (x[1] <= -7.01) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[1] <= -6.59) {
														if (x[0] <= 5.99) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 5.95) {
											if (x[1] <= -6.39) {
												return 2.0f;
											}
											else {
												if (x[1] <= -6.32) {
													if (x[0] <= 5.94) {
														return 2.0f;
													}
													else {
														if (x[1] <= -6.36) {
															if (x[1] <= -6.37) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -6.29) {
														if (x[1] <= -6.3) {
															return 0.0f;
														}
														else {
															if (x[0] <= 5.94) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -6.46) {
												if (x[0] <= 5.96) {
													return 2.0f;
												}
												else {
													if (x[0] <= 5.97) {
														if (x[1] <= -6.49) {
															if (x[1] <= -6.5) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[0] <= 5.9) {
									if (x[1] <= -5.94) {
										if (x[0] <= 5.88) {
											return 2.0f;
										}
										else {
											if (x[1] <= -6.11) {
												return 2.0f;
											}
											else {
												if (x[1] <= -6.02) {
													if (x[0] <= 5.89) {
														return 2.0f;
													}
													else {
														if (x[1] <= -6.06) {
															if (x[1] <= -6.07) {
																if (x[1] <= -6.09) {
																	if (x[1] <= -6.1) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -5.99) {
														if (x[1] <= -6.0) {
															return 0.0f;
														}
														else {
															if (x[0] <= 5.89) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 5.85) {
											if (x[1] <= -5.81) {
												return 2.0f;
											}
											else {
												if (x[0] <= 5.84) {
													if (x[1] <= -5.74) {
														if (x[1] <= -5.78) {
															if (x[1] <= -5.79) {
																return 2.0f;
															}
															else {
																if (x[0] <= 5.83) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[0] <= 5.83) {
															if (x[1] <= -5.72) {
																return 2.0f;
															}
															else {
																if (x[1] <= -5.69) {
																	if (x[1] <= -5.7) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[1] <= -5.87) {
												if (x[0] <= 5.87) {
													if (x[0] <= 5.86) {
														return 2.0f;
													}
													else {
														if (x[1] <= -5.92) {
															return 2.0f;
														}
														else {
															if (x[1] <= -5.9) {
																return 0.0f;
															}
															else {
																if (x[1] <= -5.89) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= -6.16) {
										if (x[0] <= 5.92) {
											if (x[0] <= 5.91) {
												return 2.0f;
											}
											else {
												if (x[1] <= -6.22) {
													return 2.0f;
												}
												else {
													if (x[1] <= -6.19) {
														if (x[1] <= -6.2) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= -5.75) {
								if (x[0] <= 6.05) {
									if (x[1] <= -6.72) {
										if (x[1] <= -7.01) {
											return 0.0f;
										}
										else {
											if (x[0] <= 6.03) {
												if (x[1] <= -6.82) {
													if (x[1] <= -7.0) {
														if (x[0] <= 6.02) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[0] <= 6.01) {
														return 2.0f;
													}
													else {
														if (x[1] <= -6.76) {
															if (x[0] <= 6.02) {
																return 2.0f;
															}
															else {
																if (x[1] <= -6.79) {
																	if (x[1] <= -6.8) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -6.89) {
													if (x[0] <= 6.04) {
														if (x[1] <= -7.0) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														if (x[1] <= -6.98) {
															return 0.0f;
														}
														else {
															if (x[1] <= -6.92) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= -6.69) {
											if (x[0] <= 6.01) {
												if (x[1] <= -6.7) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[1] <= -5.77) {
										if (x[0] <= 6.06) {
											if (x[1] <= -6.96) {
												if (x[1] <= -6.97) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[0] <= 7.08) {
											return 0.0f;
										}
										else {
											if (x[0] <= 7.17) {
												if (x[1] <= -5.76) {
													if (x[0] <= 7.13) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[0] <= 6.9) {
									if (x[0] <= 6.86) {
										return 0.0f;
									}
									else {
										if (x[1] <= -5.67) {
											return 0.0f;
										}
										else {
											return 2.0f;
										}

									}

								}
								else {
									if (x[0] <= 7.39) {
										if (x[1] <= -5.72) {
											if (x[0] <= 7.02) {
												return 0.0f;
											}
											else {
												if (x[0] <= 7.31) {
													if (x[1] <= -5.73) {
														if (x[0] <= 7.06) {
															return 0.0f;
														}
														else {
															if (x[0] <= 7.2) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.29) {
																	if (x[1] <= -5.74) {
																		if (x[0] <= 7.23) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 7.26) {
																				return 2.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 6.98) {
												if (x[1] <= -5.69) {
													if (x[1] <= -5.7) {
														return 0.0f;
													}
													else {
														if (x[0] <= 6.95) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[0] <= 6.91) {
														if (x[1] <= -5.68) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}
											else {
												if (x[0] <= 7.37) {
													return 2.0f;
												}
												else {
													if (x[1] <= -5.71) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= -5.68) {
											if (x[1] <= -5.7) {
												return 0.0f;
											}
											else {
												if (x[0] <= 7.48) {
													if (x[1] <= -5.69) {
														if (x[0] <= 7.43) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 7.64) {
												if (x[1] <= -5.67) {
													if (x[0] <= 7.5) {
														return 2.0f;
													}
													else {
														if (x[0] <= 7.53) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[1] <= -5.67) {
													return 0.0f;
												}
												else {
													if (x[0] <= 7.68) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}

								}

							}

						}

					}

				}
				else {
					if (x[0] <= 7.38) {
						if (x[1] <= 1.58) {
							if (x[1] <= -5.42) {
								if (x[0] <= 6.61) {
									if (x[1] <= -5.53) {
										if (x[0] <= 6.49) {
											return 0.0f;
										}
										else {
											if (x[1] <= -5.57) {
												return 0.0f;
											}
											else {
												if (x[0] <= 6.53) {
													if (x[1] <= -5.54) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[1] <= -5.56) {
														if (x[0] <= 6.58) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 6.26) {
											if (x[1] <= -5.46) {
												if (x[0] <= 6.22) {
													return 0.0f;
												}
												else {
													if (x[1] <= -5.47) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}

											}
											else {
												if (x[0] <= 6.05) {
													if (x[0] <= 6.01) {
														return 0.0f;
													}
													else {
														if (x[1] <= -5.43) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[1] <= -5.44) {
														if (x[0] <= 6.17) {
															if (x[0] <= 6.11) {
																return 0.0f;
															}
															else {
																if (x[1] <= -5.45) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -5.49) {
												if (x[0] <= 6.41) {
													if (x[1] <= -5.51) {
														return 0.0f;
													}
													else {
														if (x[0] <= 6.33) {
															return 0.0f;
														}
														else {
															if (x[0] <= 6.37) {
																if (x[1] <= -5.5) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 6.45) {
														if (x[1] <= -5.52) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}
											else {
												if (x[0] <= 6.29) {
													if (x[1] <= -5.48) {
														return 0.0f;
													}
													else {
														return 2.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}

								}
								else {
									if (x[0] <= 6.83) {
										if (x[1] <= -5.58) {
											if (x[0] <= 6.71) {
												if (x[1] <= -5.6) {
													return 0.0f;
												}
												else {
													if (x[0] <= 6.65) {
														return 0.0f;
													}
													else {
														if (x[0] <= 6.68) {
															if (x[1] <= -5.59) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -5.63) {
													if (x[0] <= 6.79) {
														return 0.0f;
													}
													else {
														if (x[1] <= -5.64) {
															if (x[0] <= 6.82) {
																return 0.0f;
															}
															else {
																if (x[1] <= -5.65) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[0] <= 6.75) {
														if (x[1] <= -5.61) {
															if (x[0] <= 6.73) {
																return 0.0f;
															}
															else {
																if (x[1] <= -5.62) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											return 2.0f;
										}

									}
									else {
										return 2.0f;
									}

								}

							}
							else {
								if (x[0] <= 7.01) {
									if (x[1] <= -5.4) {
										if (x[0] <= 5.91) {
											if (x[0] <= 5.87) {
												return 0.0f;
											}
											else {
												if (x[1] <= -5.41) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											return 2.0f;
										}

									}
									else {
										if (x[1] <= 1.56) {
											if (x[0] <= 6.97) {
												return 2.0f;
											}
											else {
												if (x[1] <= -2.46) {
													if (x[1] <= -2.54) {
														return 2.0f;
													}
													else {
														if (x[1] <= -2.49) {
															if (x[0] <= 6.99) {
																return 2.0f;
															}
															else {
																if (x[1] <= -2.52) {
																	if (x[0] <= 7.0) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											if (x[0] <= 5.91) {
												if (x[0] <= 5.87) {
													return 1.0f;
												}
												else {
													if (x[1] <= 1.57) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												return 2.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= -2.46) {
										if (x[1] <= -3.22) {
											if (x[0] <= 7.32) {
												return 2.0f;
											}
											else {
												if (x[1] <= -3.32) {
													if (x[1] <= -4.44) {
														return 2.0f;
													}
													else {
														if (x[1] <= -4.24) {
															if (x[1] <= -4.34) {
																if (x[0] <= 7.36) {
																	if (x[1] <= -4.36) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 7.35) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 7.37) {
																		if (x[1] <= -4.39) {
																			if (x[1] <= -4.41) {
																				return 2.0f;
																			}
																			else {
																				if (x[1] <= -4.4) {
																					return 0.0f;
																				}
																				else {
																					return 2.0f;
																				}

																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 7.34) {
																	if (x[1] <= -4.32) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -4.25) {
																			if (x[1] <= -4.29) {
																				if (x[0] <= 7.33) {
																					return 2.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 2.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= -4.25) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 7.36) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.34) {
														if (x[1] <= -3.24) {
															return 2.0f;
														}
														else {
															if (x[0] <= 7.33) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -3.27) {
															if (x[0] <= 7.37) {
																if (x[1] <= -3.29) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 7.35) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 7.2) {
												if (x[1] <= -2.86) {
													if (x[0] <= 7.16) {
														return 2.0f;
													}
													else {
														if (x[1] <= -2.94) {
															return 2.0f;
														}
														else {
															if (x[1] <= -2.92) {
																if (x[0] <= 7.19) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 7.17) {
																	if (x[1] <= -2.89) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[0] <= 7.1) {
														if (x[1] <= -2.69) {
															if (x[1] <= -2.74) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.07) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= -2.71) {
																		if (x[0] <= 7.09) {
																			if (x[1] <= -2.72) {
																				return 2.0f;
																			}
																			else {
																				if (x[0] <= 7.08) {
																					return 2.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= -2.62) {
																if (x[0] <= 7.06) {
																	if (x[0] <= 7.04) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -2.66) {
																			return 2.0f;
																		}
																		else {
																			if (x[0] <= 7.05) {
																				if (x[1] <= -2.64) {
																					return 2.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= -2.47) {
																	if (x[0] <= 7.03) {
																		if (x[1] <= -2.57) {
																			if (x[1] <= -2.59) {
																				return 2.0f;
																			}
																			else {
																				if (x[0] <= 7.02) {
																					return 2.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[1] <= -2.48) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 7.09) {
																				return 0.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[0] <= 7.04) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= -2.48) {
															if (x[1] <= -2.77) {
																if (x[0] <= 7.14) {
																	if (x[1] <= -2.82) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 7.13) {
																			if (x[1] <= -2.79) {
																				return 2.0f;
																			}
																			else {
																				if (x[0] <= 7.11) {
																					return 2.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= -2.49) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 7.19) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -2.5) {
													if (x[1] <= -2.99) {
														if (x[0] <= 7.28) {
															if (x[1] <= -3.11) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.24) {
																	if (x[0] <= 7.23) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= -3.02) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= -3.04) {
																		if (x[0] <= 7.25) {
																			return 2.0f;
																		}
																		else {
																			if (x[1] <= -3.07) {
																				if (x[0] <= 7.26) {
																					return 2.0f;
																				}
																				else {
																					if (x[0] <= 7.27) {
																						if (x[1] <= -3.09) {
																							return 2.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= -3.14) {
																if (x[0] <= 7.31) {
																	if (x[1] <= -3.19) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 7.3) {
																			if (x[1] <= -3.16) {
																				return 2.0f;
																			}
																			else {
																				if (x[0] <= 7.29) {
																					return 2.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= -3.21) {
																		if (x[0] <= 7.32) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -2.52) {
															if (x[1] <= -2.97) {
																if (x[0] <= 7.21) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[0] <= 7.3) {
																return 0.0f;
															}
															else {
																if (x[1] <= -2.51) {
																	if (x[0] <= 7.36) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}

														}

													}

												}
												else {
													if (x[0] <= 7.23) {
														if (x[1] <= -2.49) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 7.32) {
											if (x[0] <= 7.28) {
												return 2.0f;
											}
											else {
												if (x[1] <= 0.43) {
													return 2.0f;
												}
												else {
													if (x[1] <= 0.48) {
														if (x[1] <= 0.46) {
															if (x[0] <= 7.3) {
																return 2.0f;
															}
															else {
																if (x[1] <= 0.44) {
																	if (x[0] <= 7.31) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 0.27) {
												return 2.0f;
											}
											else {
												if (x[1] <= 0.48) {
													if (x[1] <= 0.38) {
														if (x[0] <= 7.36) {
															if (x[1] <= 0.28) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.34) {
																	if (x[1] <= 0.32) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 7.33) {
																			return 2.0f;
																		}
																		else {
																			if (x[1] <= 0.36) {
																				return 1.0f;
																			}
																			else {
																				return 2.0f;
																			}

																		}

																	}

																}
																else {
																	return 1.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.34) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.37) {
																	if (x[1] <= 0.36) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 7.36) {
															if (x[1] <= 0.41) {
																if (x[0] <= 7.34) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 7.35) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 0.4) {
																			return 0.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 0.47) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 7.33) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 0.47) {
																if (x[1] <= 0.43) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 7.37) {
																		if (x[1] <= 0.45) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 0.46) {
																				return 0.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 7.37) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= 0.49) {
														if (x[0] <= 7.37) {
															return 2.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}

									}

								}

							}

						}
						else {
							if (x[0] <= 6.61) {
								if (x[1] <= 1.7) {
									if (x[0] <= 6.26) {
										if (x[1] <= 1.62) {
											if (x[0] <= 6.05) {
												if (x[0] <= 6.01) {
													return 1.0f;
												}
												else {
													if (x[1] <= 1.59) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												if (x[1] <= 1.6) {
													return 2.0f;
												}
												else {
													if (x[0] <= 6.17) {
														if (x[0] <= 6.11) {
															return 1.0f;
														}
														else {
															if (x[1] <= 1.61) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 6.22) {
												return 1.0f;
											}
											else {
												if (x[1] <= 1.63) {
													return 2.0f;
												}
												else {
													return 1.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.65) {
											return 2.0f;
										}
										else {
											if (x[0] <= 6.41) {
												if (x[1] <= 1.68) {
													if (x[0] <= 6.33) {
														if (x[1] <= 1.66) {
															if (x[0] <= 6.29) {
																return 1.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 1.0f;
														}

													}
													else {
														if (x[1] <= 1.67) {
															return 2.0f;
														}
														else {
															if (x[0] <= 6.37) {
																return 1.0f;
															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													return 1.0f;
												}

											}
											else {
												if (x[0] <= 6.45) {
													if (x[1] <= 1.69) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}

								}
								else {
									if (x[0] <= 6.49) {
										return 1.0f;
									}
									else {
										if (x[1] <= 1.75) {
											if (x[1] <= 1.73) {
												if (x[0] <= 6.53) {
													if (x[1] <= 1.71) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[0] <= 6.58) {
													return 1.0f;
												}
												else {
													if (x[0] <= 6.59) {
														if (x[1] <= 1.74) {
															return 2.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											return 1.0f;
										}

									}

								}

							}
							else {
								if (x[0] <= 6.87) {
									if (x[1] <= 1.77) {
										if (x[1] <= 1.76) {
											return 2.0f;
										}
										else {
											if (x[0] <= 6.65) {
												return 1.0f;
											}
											else {
												return 2.0f;
											}

										}

									}
									else {
										if (x[0] <= 6.73) {
											if (x[1] <= 1.79) {
												if (x[0] <= 6.68) {
													return 1.0f;
												}
												else {
													if (x[1] <= 1.78) {
														return 2.0f;
													}
													else {
														if (x[0] <= 6.71) {
															return 1.0f;
														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[1] <= 1.81) {
												if (x[0] <= 6.75) {
													if (x[1] <= 1.8) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												if (x[0] <= 6.82) {
													if (x[1] <= 1.82) {
														if (x[0] <= 6.79) {
															return 1.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 1.0f;
													}

												}
												else {
													if (x[1] <= 1.85) {
														if (x[0] <= 6.83) {
															if (x[1] <= 1.84) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														return 1.0f;
													}

												}

											}

										}

									}

								}
								else {
									if (x[1] <= 1.86) {
										return 2.0f;
									}
									else {
										if (x[0] <= 6.9) {
											return 1.0f;
										}
										else {
											return 2.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= -2.53) {
							if (x[1] <= -3.89) {
								if (x[1] <= -5.12) {
									if (x[0] <= 7.6) {
										return 2.0f;
									}
									else {
										if (x[1] <= -5.39) {
											if (x[0] <= 7.68) {
												return 2.0f;
											}
											else {
												if (x[1] <= -5.46) {
													return 2.0f;
												}
												else {
													if (x[0] <= 7.69) {
														if (x[1] <= -5.42) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 7.66) {
												if (x[1] <= -5.26) {
													if (x[0] <= 7.64) {
														return 2.0f;
													}
													else {
														if (x[1] <= -5.32) {
															return 2.0f;
														}
														else {
															if (x[0] <= 7.65) {
																if (x[1] <= -5.29) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 7.63) {
														if (x[1] <= -5.19) {
															if (x[0] <= 7.62) {
																return 2.0f;
															}
															else {
																if (x[1] <= -5.22) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 7.61) {
																if (x[1] <= -5.16) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= -5.36) {
													if (x[0] <= 7.67) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= -4.12) {
										if (x[0] <= 7.53) {
											if (x[1] <= -4.72) {
												if (x[0] <= 7.47) {
													return 2.0f;
												}
												else {
													if (x[1] <= -4.92) {
														return 2.0f;
													}
													else {
														if (x[0] <= 7.5) {
															if (x[1] <= -4.82) {
																return 2.0f;
															}
															else {
																if (x[1] <= -4.76) {
																	if (x[0] <= 7.48) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 7.49) {
																			if (x[1] <= -4.79) {
																				if (x[1] <= -4.81) {
																					return 2.0f;
																				}
																				else {
																					if (x[1] <= -4.8) {
																						return 0.0f;
																					}
																					else {
																						return 2.0f;
																					}

																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -4.86) {
																if (x[0] <= 7.51) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 7.52) {
																		if (x[1] <= -4.89) {
																			if (x[1] <= -4.91) {
																				return 2.0f;
																			}
																			else {
																				if (x[1] <= -4.9) {
																					return 0.0f;
																				}
																				else {
																					return 2.0f;
																				}

																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 7.45) {
													if (x[1] <= -4.62) {
														if (x[0] <= 7.43) {
															return 2.0f;
														}
														else {
															if (x[1] <= -4.66) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.44) {
																	if (x[1] <= -4.64) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= -4.21) {
															if (x[1] <= -4.46) {
																if (x[0] <= 7.41) {
																	if (x[1] <= -4.52) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 7.39) {
																			return 2.0f;
																		}
																		else {
																			if (x[0] <= 7.4) {
																				if (x[1] <= -4.49) {
																					return 2.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[1] <= -4.59) {
																		if (x[0] <= 7.42) {
																			return 2.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= -4.22) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 7.39) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= -4.18) {
																if (x[0] <= 7.42) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 7.43) {
																		if (x[1] <= -4.2) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= -4.19) {
																				return 2.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -4.16) {
														if (x[0] <= 7.46) {
															if (x[1] <= -4.69) {
																return 2.0f;
															}
															else {
																if (x[1] <= -4.17) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= -4.14) {
															if (x[0] <= 7.49) {
																if (x[0] <= 7.48) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= -4.15) {
																		return 0.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= -5.01) {
												if (x[0] <= 7.58) {
													if (x[1] <= -5.06) {
														return 2.0f;
													}
													else {
														if (x[0] <= 7.56) {
															if (x[1] <= -5.02) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.55) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -5.04) {
																if (x[0] <= 7.57) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 7.59) {
														if (x[1] <= -5.09) {
															if (x[1] <= -5.11) {
																return 2.0f;
															}
															else {
																if (x[1] <= -5.1) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= -4.14) {
													if (x[1] <= -4.96) {
														if (x[0] <= 7.54) {
															if (x[1] <= -4.99) {
																return 2.0f;
															}
															else {
																if (x[1] <= -4.97) {
																	return 0.0f;
																}
																else {
																	return 2.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 7.56) {
														if (x[0] <= 7.55) {
															return 2.0f;
														}
														else {
															if (x[1] <= -4.13) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 7.65) {
											if (x[1] <= -4.09) {
												if (x[0] <= 7.61) {
													if (x[0] <= 7.6) {
														return 2.0f;
													}
													else {
														if (x[1] <= -4.11) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 2.0f;
											}

										}
										else {
											if (x[1] <= -4.07) {
												return 0.0f;
											}
											else {
												if (x[1] <= -3.97) {
													if (x[0] <= 7.69) {
														return 2.0f;
													}
													else {
														if (x[1] <= -3.99) {
															if (x[1] <= -4.06) {
																return 0.0f;
															}
															else {
																return 2.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.67) {
														if (x[1] <= -3.94) {
															return 2.0f;
														}
														else {
															if (x[1] <= -3.92) {
																if (x[0] <= 7.66) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -3.96) {
															if (x[0] <= 7.68) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}

									}

								}

							}
							else {
								if (x[1] <= -3.51) {
									if (x[0] <= 7.54) {
										if (x[1] <= -3.66) {
											return 2.0f;
										}
										else {
											if (x[0] <= 7.48) {
												if (x[0] <= 7.46) {
													return 2.0f;
												}
												else {
													if (x[1] <= -3.54) {
														return 2.0f;
													}
													else {
														if (x[0] <= 7.47) {
															if (x[1] <= -3.52) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -3.59) {
													if (x[0] <= 7.51) {
														return 2.0f;
													}
													else {
														if (x[1] <= -3.62) {
															if (x[0] <= 7.52) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.53) {
																	if (x[1] <= -3.64) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.49) {
														if (x[1] <= -3.56) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= -3.71) {
											if (x[0] <= 7.63) {
												if (x[1] <= -3.82) {
													if (x[0] <= 7.62) {
														return 2.0f;
													}
													else {
														if (x[1] <= -3.84) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.58) {
														if (x[1] <= -3.74) {
															return 2.0f;
														}
														else {
															if (x[0] <= 7.57) {
																if (x[0] <= 7.56) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= -3.72) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -3.77) {
															if (x[0] <= 7.6) {
																if (x[1] <= -3.79) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 7.59) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= -3.81) {
																	if (x[0] <= 7.61) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -3.87) {
													if (x[0] <= 7.64) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 7.55) {
												if (x[1] <= -3.69) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= -2.58) {
										if (x[1] <= -3.37) {
											if (x[0] <= 7.44) {
												if (x[1] <= -3.46) {
													return 2.0f;
												}
												else {
													if (x[0] <= 7.42) {
														if (x[1] <= -3.41) {
															return 2.0f;
														}
														else {
															if (x[0] <= 7.4) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.41) {
																	if (x[1] <= -3.39) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= -3.44) {
															if (x[0] <= 7.43) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 7.45) {
													if (x[1] <= -3.49) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[1] <= -2.59) {
												if (x[0] <= 7.39) {
													if (x[1] <= -3.34) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 7.66) {
													return 0.0f;
												}
												else {
													return 2.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 7.53) {
											if (x[1] <= -2.55) {
												return 0.0f;
											}
											else {
												if (x[0] <= 7.46) {
													return 0.0f;
												}
												else {
													if (x[0] <= 7.49) {
														if (x[1] <= -2.54) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -2.56) {
												if (x[0] <= 7.62) {
													if (x[1] <= -2.57) {
														return 0.0f;
													}
													else {
														if (x[0] <= 7.57) {
															return 0.0f;
														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}
											else {
												return 2.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[1] <= 0.03) {
								if (x[1] <= -0.06) {
									if (x[1] <= -2.52) {
										if (x[0] <= 7.41) {
											return 0.0f;
										}
										else {
											return 2.0f;
										}

									}
									else {
										return 2.0f;
									}

								}
								else {
									if (x[0] <= 7.63) {
										return 2.0f;
									}
									else {
										if (x[1] <= -0.02) {
											if (x[0] <= 7.67) {
												return 2.0f;
											}
											else {
												if (x[1] <= -0.04) {
													if (x[0] <= 7.69) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 7.65) {
												if (x[1] <= 0.01) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 0.46) {
									if (x[1] <= 0.16) {
										if (x[0] <= 7.55) {
											if (x[0] <= 7.53) {
												return 2.0f;
											}
											else {
												if (x[1] <= 0.13) {
													return 2.0f;
												}
												else {
													if (x[1] <= 0.14) {
														if (x[0] <= 7.54) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 0.08) {
												if (x[0] <= 7.6) {
													if (x[0] <= 7.59) {
														return 2.0f;
													}
													else {
														if (x[1] <= 0.06) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.61) {
														if (x[1] <= 0.04) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 7.69) {
															return 0.0f;
														}
														else {
															if (x[1] <= 0.07) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 7.61) {
													if (x[1] <= 0.13) {
														if (x[0] <= 7.58) {
															if (x[1] <= 0.09) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.56) {
																	if (x[1] <= 0.11) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.12) {
																return 0.0f;
															}
															else {
																if (x[0] <= 7.6) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 7.56) {
															if (x[1] <= 0.15) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.1) {
														if (x[0] <= 7.65) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 7.49) {
											if (x[1] <= 0.25) {
												if (x[1] <= 0.2) {
													if (x[0] <= 7.45) {
														return 2.0f;
													}
													else {
														if (x[1] <= 0.18) {
															if (x[0] <= 7.48) {
																return 2.0f;
															}
															else {
																if (x[1] <= 0.17) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}
														else {
															if (x[0] <= 7.46) {
																if (x[1] <= 0.19) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 1.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 7.42) {
														if (x[1] <= 0.23) {
															return 2.0f;
														}
														else {
															if (x[0] <= 7.39) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														if (x[0] <= 7.47) {
															if (x[1] <= 0.23) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.44) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 0.24) {
																		if (x[0] <= 7.46) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 0.21) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= 0.33) {
													if (x[0] <= 7.43) {
														if (x[1] <= 0.28) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.41) {
																if (x[1] <= 0.31) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 7.39) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= 0.29) {
																	if (x[0] <= 7.42) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 0.26) {
															if (x[0] <= 7.44) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 0.43) {
												if (x[1] <= 0.18) {
													if (x[0] <= 7.51) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 0.42) {
														return 0.0f;
													}
													else {
														if (x[0] <= 7.67) {
															return 0.0f;
														}
														else {
															return 1.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 7.6) {
													if (x[1] <= 0.44) {
														return 0.0f;
													}
													else {
														if (x[0] <= 7.53) {
															if (x[1] <= 0.45) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													return 1.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 1.25) {
										if (x[0] <= 7.53) {
											if (x[1] <= 0.84) {
												if (x[0] <= 7.45) {
													if (x[1] <= 0.69) {
														if (x[0] <= 7.41) {
															if (x[1] <= 0.58) {
																if (x[1] <= 0.51) {
																	if (x[1] <= 0.47) {
																		if (x[0] <= 7.39) {
																			return 0.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	if (x[0] <= 7.39) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= 0.55) {
																			return 1.0f;
																		}
																		else {
																			if (x[0] <= 7.4) {
																				return 2.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}

																	}

																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[1] <= 0.66) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.42) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 0.73) {
															if (x[0] <= 7.43) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.44) {
																	if (x[1] <= 0.71) {
																		return 1.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 1.0f;
																}

															}

														}
														else {
															return 2.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.77) {
														return 1.0f;
													}
													else {
														if (x[0] <= 7.47) {
															if (x[0] <= 7.46) {
																return 2.0f;
															}
															else {
																if (x[1] <= 0.8) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 0.82) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= 0.83) {
																			return 1.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}

																}

															}

														}
														else {
															return 1.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 7.48) {
													return 2.0f;
												}
												else {
													if (x[1] <= 1.03) {
														if (x[1] <= 0.9) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.51) {
																if (x[1] <= 0.95) {
																	if (x[0] <= 7.5) {
																		if (x[1] <= 0.92) {
																			if (x[0] <= 7.49) {
																				return 2.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}
																		else {
																			return 2.0f;
																		}

																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}
															else {
																if (x[1] <= 0.99) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 7.52) {
																		if (x[1] <= 1.01) {
																			if (x[1] <= 1.0) {
																				return 2.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}
																		else {
																			return 2.0f;
																		}

																	}
																	else {
																		return 1.0f;
																	}

																}

															}

														}

													}
													else {
														return 2.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 1.1) {
												if (x[0] <= 7.54) {
													if (x[1] <= 1.06) {
														return 1.0f;
													}
													else {
														if (x[1] <= 1.08) {
															return 2.0f;
														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													return 1.0f;
												}

											}
											else {
												if (x[0] <= 7.58) {
													if (x[1] <= 1.17) {
														if (x[0] <= 7.54) {
															return 2.0f;
														}
														else {
															if (x[1] <= 1.13) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.56) {
																	if (x[1] <= 1.14) {
																		if (x[0] <= 7.55) {
																			return 2.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	if (x[1] <= 1.16) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 7.57) {
																			return 2.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}

															}

														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[1] <= 1.24) {
														return 1.0f;
													}
													else {
														if (x[0] <= 7.59) {
															return 2.0f;
														}
														else {
															return 1.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[0] <= 7.61) {
											if (x[0] <= 7.59) {
												if (x[1] <= 1.85) {
													return 2.0f;
												}
												else {
													if (x[0] <= 7.5) {
														return 2.0f;
													}
													else {
														if (x[0] <= 7.53) {
															if (x[1] <= 1.86) {
																if (x[0] <= 7.51) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 7.52) {
																		return 1.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}
															else {
																return 1.0f;
															}

														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 1.81) {
													if (x[1] <= 1.29) {
														if (x[0] <= 7.6) {
															return 2.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 2.0f;
													}

												}
												else {
													if (x[0] <= 7.6) {
														if (x[1] <= 1.84) {
															return 2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 1.55) {
												if (x[0] <= 7.66) {
													if (x[1] <= 1.4) {
														if (x[0] <= 7.63) {
															if (x[1] <= 1.32) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.62) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= 1.36) {
																		return 1.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															return 1.0f;
														}

													}
													else {
														if (x[0] <= 7.64) {
															return 2.0f;
														}
														else {
															if (x[1] <= 1.47) {
																if (x[0] <= 7.65) {
																	if (x[1] <= 1.43) {
																		return 1.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 1.51) {
														return 1.0f;
													}
													else {
														if (x[0] <= 7.67) {
															return 2.0f;
														}
														else {
															if (x[0] <= 7.69) {
																if (x[1] <= 1.54) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 7.68) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= 1.71) {
													if (x[0] <= 7.65) {
														if (x[1] <= 1.68) {
															return 2.0f;
														}
														else {
															if (x[0] <= 7.64) {
																return 2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 1.62) {
															if (x[0] <= 7.68) {
																if (x[1] <= 1.58) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 7.67) {
																		if (x[1] <= 1.61) {
																			return 2.0f;
																		}
																		else {
																			if (x[0] <= 7.66) {
																				return 2.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 7.69) {
																	if (x[1] <= 1.58) {
																		return 0.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 7.66) {
																if (x[1] <= 1.64) {
																	return 2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 1.85) {
														if (x[0] <= 7.63) {
															if (x[1] <= 1.78) {
																if (x[0] <= 7.62) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= 1.74) {
																		return 2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 7.64) {
															return 0.0f;
														}
														else {
															if (x[1] <= 1.86) {
																if (x[0] <= 7.68) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}

										}

									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[1] <= 4.89) {
					if (x[0] <= 6.78) {
						if (x[0] <= 6.03) {
							if (x[1] <= 3.42) {
								if (x[1] <= 2.58) {
									if (x[0] <= 5.9) {
										if (x[1] <= 2.16) {
											if (x[0] <= 5.86) {
												if (x[1] <= 2.01) {
													if (x[0] <= 5.84) {
														if (x[1] <= 1.92) {
															return 1.0f;
														}
														else {
															if (x[0] <= 5.83) {
																return 2.0f;
															}
															else {
																if (x[1] <= 1.94) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 1.98) {
																		return 2.0f;
																	}
																	else {
																		if (x[1] <= 1.99) {
																			return 1.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}

																}

															}

														}

													}
													else {
														return 1.0f;
													}

												}
												else {
													if (x[0] <= 5.85) {
														return 2.0f;
													}
													else {
														if (x[1] <= 2.08) {
															return 1.0f;
														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 2.1) {
													return 1.0f;
												}
												else {
													if (x[0] <= 5.87) {
														if (x[1] <= 2.14) {
															if (x[1] <= 2.11) {
																return 2.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 2.0f;
														}

													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 5.88) {
												return 2.0f;
											}
											else {
												if (x[1] <= 2.35) {
													if (x[1] <= 2.25) {
														return 1.0f;
													}
													else {
														if (x[0] <= 5.89) {
															return 2.0f;
														}
														else {
															if (x[1] <= 2.29) {
																return 1.0f;
															}
															else {
																if (x[1] <= 2.3) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= 2.32) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 2.33) {
																			return 2.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}

															}

														}

													}

												}
												else {
													return 2.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 5.93) {
											if (x[1] <= 2.4) {
												return 1.0f;
											}
											else {
												if (x[1] <= 2.49) {
													if (x[0] <= 5.91) {
														return 2.0f;
													}
													else {
														if (x[0] <= 5.92) {
															if (x[1] <= 2.43) {
																return 1.0f;
															}
															else {
																if (x[1] <= 2.45) {
																	return 2.0f;
																}
																else {
																	if (x[1] <= 2.47) {
																		return 1.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											return 1.0f;
										}

									}

								}
								else {
									if (x[0] <= 5.95) {
										if (x[1] <= 3.37) {
											if (x[0] <= 5.94) {
												return 2.0f;
											}
											else {
												if (x[1] <= 2.66) {
													if (x[1] <= 2.62) {
														return 1.0f;
													}
													else {
														if (x[1] <= 2.64) {
															return 2.0f;
														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													return 2.0f;
												}

											}

										}
										else {
											if (x[0] <= 5.88) {
												if (x[1] <= 3.41) {
													return 2.0f;
												}
												else {
													if (x[0] <= 5.86) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												if (x[1] <= 3.4) {
													if (x[0] <= 5.93) {
														if (x[1] <= 3.39) {
															return 2.0f;
														}
														else {
															if (x[0] <= 5.92) {
																if (x[0] <= 5.9) {
																	if (x[0] <= 5.89) {
																		return 2.0f;
																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														return 1.0f;
													}

												}
												else {
													return 1.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 2.83) {
											if (x[0] <= 5.97) {
												if (x[1] <= 2.73) {
													return 1.0f;
												}
												else {
													if (x[0] <= 5.96) {
														return 2.0f;
													}
													else {
														if (x[1] <= 2.77) {
															return 1.0f;
														}
														else {
															if (x[1] <= 2.79) {
																if (x[1] <= 2.78) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 2.0f;
															}

														}

													}

												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[1] <= 3.37) {
												if (x[0] <= 5.98) {
													return 2.0f;
												}
												else {
													if (x[1] <= 3.03) {
														if (x[0] <= 6.0) {
															if (x[1] <= 2.95) {
																if (x[0] <= 5.99) {
																	if (x[1] <= 2.88) {
																		return 1.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 2.0f;
															}

														}
														else {
															if (x[1] <= 2.99) {
																return 1.0f;
															}
															else {
																if (x[1] <= 3.0) {
																	if (x[0] <= 6.01) {
																		return 2.0f;
																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	return 1.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 3.35) {
															if (x[0] <= 6.01) {
																return 2.0f;
															}
															else {
																if (x[1] <= 3.14) {
																	if (x[0] <= 6.02) {
																		if (x[1] <= 3.06) {
																			return 1.0f;
																		}
																		else {
																			return 2.0f;
																		}

																	}
																	else {
																		if (x[1] <= 3.1) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= 3.11) {
																				return 2.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[1] <= 3.33) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 6.02) {
																			return 2.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}

															}

														}
														else {
															return 1.0f;
														}

													}

												}

											}
											else {
												return 1.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 4.8) {
									if (x[1] <= 4.79) {
										return 1.0f;
									}
									else {
										if (x[0] <= 5.83) {
											return 0.0f;
										}
										else {
											return 1.0f;
										}

									}

								}
								else {
									if (x[0] <= 5.9) {
										if (x[1] <= 4.82) {
											if (x[0] <= 5.87) {
												return 0.0f;
											}
											else {
												if (x[1] <= 4.81) {
													return 1.0f;
												}
												else {
													if (x[0] <= 5.89) {
														return 0.0f;
													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[1] <= 4.83) {
											return 1.0f;
										}
										else {
											if (x[1] <= 4.87) {
												if (x[0] <= 5.96) {
													if (x[1] <= 4.84) {
														if (x[0] <= 5.94) {
															return 0.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 4.86) {
														return 1.0f;
													}
													else {
														if (x[0] <= 6.0) {
															return 0.0f;
														}
														else {
															return 1.0f;
														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[1] <= 4.58) {
								if (x[0] <= 6.73) {
									if (x[0] <= 6.05) {
										if (x[1] <= 3.21) {
											return 1.0f;
										}
										else {
											if (x[1] <= 3.33) {
												if (x[0] <= 6.04) {
													return 2.0f;
												}
												else {
													if (x[1] <= 3.25) {
														return 1.0f;
													}
													else {
														if (x[1] <= 3.31) {
															return 2.0f;
														}
														else {
															return 1.0f;
														}

													}

												}

											}
											else {
												return 1.0f;
											}

										}

									}
									else {
										if (x[0] <= 6.7) {
											if (x[0] <= 6.06) {
												if (x[1] <= 3.29) {
													return 1.0f;
												}
												else {
													if (x[1] <= 3.3) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[1] <= 3.41) {
												return 1.0f;
											}
											else {
												if (x[1] <= 3.42) {
													return 0.0f;
												}
												else {
													return 1.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 4.51) {
										if (x[1] <= 3.36) {
											return 1.0f;
										}
										else {
											if (x[1] <= 3.41) {
												if (x[0] <= 6.76) {
													if (x[1] <= 3.38) {
														return 1.0f;
													}
													else {
														if (x[0] <= 6.74) {
															if (x[1] <= 3.39) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 6.77) {
													if (x[1] <= 3.42) {
														if (x[0] <= 6.74) {
															return 0.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 1.0f;
													}

												}
												else {
													if (x[1] <= 4.03) {
														return 1.0f;
													}
													else {
														if (x[1] <= 4.08) {
															return 0.0f;
														}
														else {
															if (x[1] <= 4.44) {
																return 1.0f;
															}
															else {
																if (x[1] <= 4.45) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 4.48) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 4.49) {
																			return 0.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}

															}

														}

													}

												}

											}

										}

									}
									else {
										if (x[0] <= 6.75) {
											if (x[1] <= 4.56) {
												return 1.0f;
											}
											else {
												if (x[0] <= 6.74) {
													return 1.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 4.54) {
												if (x[0] <= 6.77) {
													if (x[1] <= 4.53) {
														return 1.0f;
													}
													else {
														if (x[0] <= 6.76) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[0] <= 6.63) {
									if (x[1] <= 4.82) {
										if (x[0] <= 6.59) {
											if (x[1] <= 4.81) {
												return 1.0f;
											}
											else {
												if (x[0] <= 6.5) {
													return 1.0f;
												}
												else {
													if (x[0] <= 6.52) {
														return 0.0f;
													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 4.76) {
												return 1.0f;
											}
											else {
												if (x[0] <= 6.62) {
													if (x[1] <= 4.78) {
														return 1.0f;
													}
													else {
														if (x[0] <= 6.6) {
															if (x[1] <= 4.81) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= 4.79) {
																if (x[0] <= 6.61) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 6.28) {
											if (x[0] <= 6.27) {
												return 1.0f;
											}
											else {
												if (x[1] <= 4.88) {
													return 1.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 6.42) {
												if (x[1] <= 4.86) {
													if (x[0] <= 6.36) {
														return 1.0f;
													}
													else {
														if (x[1] <= 4.84) {
															return 1.0f;
														}
														else {
															if (x[0] <= 6.38) {
																if (x[1] <= 4.85) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 6.3) {
														if (x[1] <= 4.87) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 4.83) {
													if (x[0] <= 6.48) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 4.73) {
										if (x[0] <= 6.71) {
											if (x[1] <= 4.64) {
												if (x[0] <= 6.7) {
													return 1.0f;
												}
												else {
													if (x[1] <= 4.63) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 6.66) {
													if (x[1] <= 4.71) {
														return 1.0f;
													}
													else {
														if (x[0] <= 6.65) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 4.69) {
														if (x[0] <= 6.69) {
															if (x[1] <= 4.66) {
																return 1.0f;
															}
															else {
																if (x[0] <= 6.68) {
																	if (x[1] <= 4.68) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 6.67) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 4.61) {
												if (x[0] <= 6.73) {
													if (x[0] <= 6.72) {
														return 1.0f;
													}
													else {
														if (x[1] <= 4.59) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 4.74) {
											if (x[0] <= 6.64) {
												return 1.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= 3.14) {
							if (x[0] <= 7.37) {
								if (x[1] <= 2.71) {
									if (x[1] <= 1.96) {
										if (x[0] <= 6.98) {
											if (x[1] <= 1.89) {
												if (x[0] <= 6.91) {
													return 1.0f;
												}
												else {
													if (x[1] <= 1.88) {
														return 2.0f;
													}
													else {
														if (x[0] <= 6.95) {
															return 1.0f;
														}
														else {
															return 2.0f;
														}

													}

												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[1] <= 1.91) {
												return 2.0f;
											}
											else {
												if (x[0] <= 7.29) {
													if (x[0] <= 7.06) {
														if (x[1] <= 1.93) {
															if (x[0] <= 7.02) {
																return 1.0f;
															}
															else {
																if (x[1] <= 1.92) {
																	return 2.0f;
																}
																else {
																	if (x[0] <= 7.05) {
																		return 1.0f;
																	}
																	else {
																		return 2.0f;
																	}

																}

															}

														}
														else {
															return 1.0f;
														}

													}
													else {
														if (x[1] <= 1.94) {
															return 2.0f;
														}
														else {
															if (x[0] <= 7.17) {
																if (x[0] <= 7.08) {
																	if (x[1] <= 1.95) {
																		return 2.0f;
																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	return 2.0f;
																}

															}
															else {
																if (x[1] <= 1.95) {
																	if (x[0] <= 7.2) {
																		return 2.0f;
																	}
																	else {
																		if (x[0] <= 7.23) {
																			return 1.0f;
																		}
																		else {
																			if (x[0] <= 7.26) {
																				return 2.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}

																	}

																}
																else {
																	return 1.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= 1.92) {
														if (x[0] <= 7.31) {
															return 2.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 1.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 7.34) {
											if (x[1] <= 1.97) {
												if (x[0] <= 7.14) {
													return 1.0f;
												}
												else {
													if (x[0] <= 7.17) {
														return 2.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[1] <= 2.61) {
												return 1.0f;
											}
											else {
												if (x[0] <= 7.36) {
													if (x[1] <= 2.64) {
														return 1.0f;
													}
													else {
														if (x[0] <= 7.35) {
															if (x[1] <= 2.68) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[0] <= 7.13) {
										if (x[1] <= 3.04) {
											if (x[0] <= 7.12) {
												return 1.0f;
											}
											else {
												if (x[1] <= 3.03) {
													return 1.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 6.99) {
												if (x[0] <= 6.97) {
													return 1.0f;
												}
												else {
													if (x[1] <= 3.13) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 7.09) {
													if (x[1] <= 3.11) {
														if (x[0] <= 7.05) {
															return 1.0f;
														}
														else {
															if (x[1] <= 3.08) {
																if (x[0] <= 7.08) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 3.06) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 7.06) {
																	if (x[1] <= 3.09) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 7.0) {
															if (x[1] <= 3.12) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 2.98) {
											if (x[0] <= 7.29) {
												if (x[1] <= 2.91) {
													if (x[0] <= 7.27) {
														return 1.0f;
													}
													else {
														if (x[1] <= 2.88) {
															return 1.0f;
														}
														else {
															if (x[1] <= 2.89) {
																if (x[0] <= 7.28) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 7.21) {
														if (x[0] <= 7.19) {
															return 1.0f;
														}
														else {
															if (x[1] <= 2.96) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 7.24) {
															if (x[1] <= 2.93) {
																return 1.0f;
															}
															else {
																if (x[1] <= 2.94) {
																	if (x[0] <= 7.22) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 2.84) {
													if (x[0] <= 7.32) {
														if (x[1] <= 2.78) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.3) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.31) {
																	if (x[1] <= 2.81) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 7.33) {
															if (x[1] <= 2.74) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 7.16) {
												if (x[1] <= 3.01) {
													if (x[0] <= 7.15) {
														return 1.0f;
													}
													else {
														if (x[1] <= 2.99) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 2.44) {
									if (x[0] <= 7.53) {
										if (x[1] <= 2.11) {
											if (x[1] <= 1.9) {
												if (x[0] <= 7.48) {
													if (x[1] <= 1.88) {
														return 2.0f;
													}
													else {
														if (x[0] <= 7.42) {
															if (x[1] <= 1.89) {
																return 2.0f;
															}
															else {
																if (x[0] <= 7.39) {
																	return 2.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													return 1.0f;
												}

											}
											else {
												if (x[0] <= 7.52) {
													return 1.0f;
												}
												else {
													if (x[1] <= 2.08) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 7.45) {
												if (x[1] <= 2.34) {
													return 1.0f;
												}
												else {
													if (x[0] <= 7.42) {
														return 1.0f;
													}
													else {
														if (x[0] <= 7.44) {
															if (x[1] <= 2.38) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.43) {
																	if (x[1] <= 2.41) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 2.28) {
													if (x[0] <= 7.49) {
														if (x[1] <= 2.21) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.47) {
																return 1.0f;
															}
															else {
																if (x[1] <= 2.24) {
																	if (x[0] <= 7.48) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 2.18) {
															if (x[0] <= 7.51) {
																if (x[0] <= 7.5) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 2.14) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.46) {
														if (x[1] <= 2.31) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 2.04) {
											if (x[0] <= 7.58) {
												if (x[1] <= 1.94) {
													if (x[0] <= 7.57) {
														return 1.0f;
													}
													else {
														if (x[1] <= 1.91) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.56) {
														if (x[1] <= 1.98) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.54) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.55) {
																	if (x[1] <= 2.01) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 1.88) {
													if (x[0] <= 7.59) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[0] <= 7.41) {
										if (x[1] <= 2.58) {
											if (x[1] <= 2.48) {
												return 1.0f;
											}
											else {
												if (x[0] <= 7.38) {
													return 1.0f;
												}
												else {
													if (x[1] <= 2.54) {
														if (x[0] <= 7.39) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.4) {
																if (x[1] <= 2.51) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[0] <= 6.92) {
								if (x[1] <= 3.23) {
									if (x[0] <= 6.86) {
										if (x[1] <= 3.22) {
											return 1.0f;
										}
										else {
											if (x[0] <= 6.84) {
												return 1.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 3.18) {
											return 1.0f;
										}
										else {
											if (x[0] <= 6.88) {
												if (x[1] <= 3.2) {
													return 1.0f;
												}
												else {
													if (x[1] <= 3.21) {
														if (x[0] <= 6.87) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 6.8) {
										if (x[1] <= 3.81) {
											if (x[0] <= 6.79) {
												if (x[1] <= 3.34) {
													return 1.0f;
												}
												else {
													if (x[1] <= 3.41) {
														return 0.0f;
													}
													else {
														if (x[1] <= 3.58) {
															return 1.0f;
														}
														else {
															if (x[1] <= 3.65) {
																if (x[1] <= 3.6) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 3.61) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 3.63) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 3.64) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[1] <= 3.77) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 3.78) {
																		return 0.0f;
																	}
																	else {
																		return 1.0f;
																	}

																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= 3.54) {
													if (x[1] <= 3.43) {
														if (x[1] <= 3.31) {
															if (x[1] <= 3.24) {
																return 1.0f;
															}
															else {
																if (x[1] <= 3.26) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 3.28) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 3.3) {
																			return 0.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 3.52) {
															if (x[1] <= 3.51) {
																if (x[1] <= 3.49) {
																	if (x[1] <= 3.48) {
																		if (x[1] <= 3.45) {
																			if (x[1] <= 3.44) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 1.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 4.31) {
												if (x[0] <= 6.79) {
													if (x[1] <= 3.86) {
														return 0.0f;
													}
													else {
														if (x[1] <= 3.91) {
															if (x[1] <= 3.88) {
																return 1.0f;
															}
															else {
																if (x[1] <= 3.89) {
																	return 0.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}
														else {
															if (x[1] <= 4.1) {
																if (x[1] <= 4.01) {
																	if (x[1] <= 4.0) {
																		if (x[1] <= 3.94) {
																			if (x[1] <= 3.93) {
																				return 0.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 4.14) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 4.19) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 4.21) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= 4.23) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 4.24) {
																					return 1.0f;
																				}
																				else {
																					if (x[1] <= 4.26) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 4.28) {
																							return 1.0f;
																						}
																						else {
																							if (x[1] <= 4.3) {
																								return 0.0f;
																							}
																							else {
																								return 1.0f;
																							}

																						}

																					}

																				}

																			}

																		}

																	}

																}

															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (x[1] <= 3.15) {
									if (x[0] <= 6.95) {
										return 1.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									return 0.0f;
								}

							}

						}

					}

				}
				else {
					if (x[1] <= 4.92) {
						if (x[0] <= 6.24) {
							if (x[0] <= 6.03) {
								return 0.0f;
							}
							else {
								if (x[1] <= 4.9) {
									if (x[0] <= 6.18) {
										return 1.0f;
									}
									else {
										if (x[0] <= 6.2) {
											return 0.0f;
										}
										else {
											return 1.0f;
										}

									}

								}
								else {
									if (x[0] <= 6.15) {
										if (x[0] <= 6.05) {
											return 0.0f;
										}
										else {
											if (x[1] <= 4.91) {
												return 1.0f;
											}
											else {
												if (x[0] <= 6.1) {
													return 0.0f;
												}
												else {
													if (x[0] <= 6.14) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							return 0.0f;
						}

					}
					else {
						return 0.0f;
					}

				}

			}

		}
		else {
			if (x[0] <= 8.7) {
				if (x[1] <= 1.44) {
					if (x[1] <= -2.82) {
						if (x[0] <= 7.75) {
							if (x[1] <= -5.66) {
								return 0.0f;
							}
							else {
								if (x[1] <= -5.49) {
									if (x[0] <= 7.73) {
										if (x[1] <= -5.54) {
											return 2.0f;
										}
										else {
											if (x[0] <= 7.71) {
												return 2.0f;
											}
											else {
												if (x[1] <= -5.52) {
													if (x[0] <= 7.72) {
														return 2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= -5.59) {
											if (x[0] <= 7.74) {
												return 2.0f;
											}
											else {
												if (x[1] <= -5.64) {
													return 2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[0] <= 7.71) {
										if (x[1] <= -4.04) {
											return 0.0f;
										}
										else {
											if (x[1] <= -4.01) {
												return 2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= -2.83) {
								return 0.0f;
							}
							else {
								if (x[0] <= 8.41) {
									return 0.0f;
								}
								else {
									if (x[0] <= 8.46) {
										return 1.0f;
									}
									else {
										return 0.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= -0.61) {
							if (x[0] <= 8.3) {
								if (x[1] <= -2.64) {
									if (x[0] <= 7.97) {
										if (x[1] <= -2.67) {
											return 0.0f;
										}
										else {
											if (x[0] <= 7.88) {
												return 0.0f;
											}
											else {
												if (x[0] <= 7.94) {
													if (x[1] <= -2.66) {
														return 0.0f;
													}
													else {
														if (x[0] <= 7.91) {
															if (x[1] <= -2.65) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													return 1.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= -2.73) {
											if (x[0] <= 8.16) {
												return 0.0f;
											}
											else {
												if (x[1] <= -2.78) {
													if (x[0] <= 8.29) {
														return 0.0f;
													}
													else {
														if (x[1] <= -2.79) {
															return 0.0f;
														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													if (x[0] <= 8.25) {
														if (x[1] <= -2.75) {
															if (x[0] <= 8.21) {
																return 0.0f;
															}
															else {
																if (x[1] <= -2.76) {
																	if (x[0] <= 8.24) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= -2.77) {
																			return 0.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}
																else {
																	return 1.0f;
																}

															}

														}
														else {
															if (x[0] <= 8.17) {
																if (x[1] <= -2.74) {
																	return 0.0f;
																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 8.11) {
												if (x[1] <= -2.69) {
													if (x[0] <= 8.03) {
														return 0.0f;
													}
													else {
														if (x[1] <= -2.7) {
															if (x[0] <= 8.07) {
																return 0.0f;
															}
															else {
																if (x[1] <= -2.72) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 8.08) {
																		if (x[1] <= -2.71) {
																			return 0.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}
																	else {
																		return 1.0f;
																	}

																}

															}

														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.99) {
														if (x[1] <= -2.68) {
															return 0.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												return 1.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 8.17) {
										if (x[1] <= -2.6) {
											if (x[0] <= 7.84) {
												if (x[0] <= 7.75) {
													return 0.0f;
												}
												else {
													if (x[1] <= -2.62) {
														if (x[0] <= 7.8) {
															return 0.0f;
														}
														else {
															if (x[1] <= -2.63) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[1] <= -0.67) {
												if (x[0] <= 8.16) {
													return 1.0f;
												}
												else {
													if (x[1] <= -1.32) {
														return 1.0f;
													}
													else {
														if (x[1] <= -1.31) {
															return 0.0f;
														}
														else {
															return 1.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 8.12) {
													return 1.0f;
												}
												else {
													if (x[1] <= -0.64) {
														if (x[0] <= 8.15) {
															return 1.0f;
														}
														else {
															if (x[1] <= -0.66) {
																if (x[0] <= 8.16) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 8.13) {
															if (x[1] <= -0.62) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= -1.52) {
											return 1.0f;
										}
										else {
											if (x[1] <= -0.76) {
												if (x[1] <= -1.24) {
													if (x[0] <= 8.25) {
														if (x[1] <= -1.42) {
															if (x[0] <= 8.24) {
																return 1.0f;
															}
															else {
																if (x[1] <= -1.44) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -1.27) {
																if (x[0] <= 8.22) {
																	if (x[1] <= -1.39) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= -1.3) {
																			if (x[0] <= 8.2) {
																				if (x[1] <= -1.37) {
																					return 1.0f;
																				}
																				else {
																					if (x[1] <= -1.31) {
																						if (x[1] <= -1.34) {
																							if (x[0] <= 8.18) {
																								return 1.0f;
																							}
																							else {
																								if (x[1] <= -1.36) {
																									if (x[0] <= 8.19) {
																										return 1.0f;
																									}
																									else {
																										return 0.0f;
																									}

																								}
																								else {
																									return 0.0f;
																								}

																							}

																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 1.0f;
																					}

																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[0] <= 8.21) {
																				return 1.0f;
																			}
																			else {
																				if (x[1] <= -1.29) {
																					return 1.0f;
																				}
																				else {
																					if (x[1] <= -1.28) {
																						return 0.0f;
																					}
																					else {
																						return 1.0f;
																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[1] <= -1.41) {
																		if (x[0] <= 8.23) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														if (x[1] <= -1.46) {
															if (x[0] <= 8.26) {
																return 1.0f;
															}
															else {
																if (x[1] <= -1.49) {
																	if (x[0] <= 8.28) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= -1.51) {
																			if (x[0] <= 8.29) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -0.82) {
														if (x[1] <= -1.21) {
															if (x[0] <= 8.27) {
																return 1.0f;
															}
															else {
																if (x[1] <= -1.22) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 8.29) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= -0.84) {
																return 1.0f;
															}
															else {
																if (x[0] <= 8.29) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 8.25) {
															if (x[0] <= 8.24) {
																return 1.0f;
															}
															else {
																if (x[1] <= -0.77) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 8.27) {
																if (x[1] <= -0.79) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 8.22) {
													if (x[1] <= -0.69) {
														if (x[0] <= 8.19) {
															return 1.0f;
														}
														else {
															if (x[1] <= -0.72) {
																if (x[0] <= 8.21) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= -0.74) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 8.2) {
																	if (x[1] <= -0.71) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}

							}
							else {
								if (x[1] <= -1.91) {
									if (x[0] <= 8.56) {
										if (x[1] <= -2.79) {
											if (x[0] <= 8.33) {
												return 0.0f;
											}
											else {
												if (x[1] <= -2.81) {
													if (x[0] <= 8.46) {
														if (x[0] <= 8.36) {
															return 0.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= -2.8) {
														if (x[0] <= 8.49) {
															if (x[0] <= 8.34) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															if (x[0] <= 8.51) {
																return 0.0f;
															}
															else {
																if (x[0] <= 8.55) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -1.96) {
												return 1.0f;
											}
											else {
												if (x[0] <= 8.53) {
													return 1.0f;
												}
												else {
													if (x[0] <= 8.55) {
														if (x[1] <= -1.94) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.54) {
																if (x[1] <= -1.92) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= -2.09) {
											if (x[1] <= -2.78) {
												if (x[0] <= 8.59) {
													if (x[1] <= -2.8) {
														return 0.0f;
													}
													else {
														if (x[0] <= 8.58) {
															return 1.0f;
														}
														else {
															if (x[1] <= -2.79) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[1] <= -2.16) {
													if (x[1] <= -2.76) {
														if (x[0] <= 8.65) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.67) {
																if (x[1] <= -2.77) {
																	return 0.0f;
																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -2.17) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.69) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 8.65) {
														return 1.0f;
													}
													else {
														if (x[0] <= 8.68) {
															if (x[1] <= -2.12) {
																if (x[0] <= 8.67) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= -2.14) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 8.66) {
																	if (x[1] <= -2.11) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 8.63) {
												if (x[1] <= -1.99) {
													if (x[0] <= 8.59) {
														if (x[1] <= -2.01) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.58) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -2.06) {
															if (x[0] <= 8.62) {
																return 1.0f;
															}
															else {
																if (x[1] <= -2.07) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 8.6) {
																if (x[1] <= -2.04) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 8.57) {
														if (x[1] <= -1.97) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 8.48) {
										if (x[1] <= -1.71) {
											if (x[0] <= 8.42) {
												if (x[1] <= -1.72) {
													return 1.0f;
												}
												else {
													if (x[0] <= 8.41) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= -1.81) {
													if (x[1] <= -1.82) {
														return 1.0f;
													}
													else {
														if (x[0] <= 8.47) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 8.46) {
														if (x[1] <= -1.76) {
															if (x[0] <= 8.44) {
																return 1.0f;
															}
															else {
																if (x[1] <= -1.79) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 8.45) {
																		if (x[1] <= -1.77) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[0] <= 8.43) {
																if (x[1] <= -1.74) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -0.86) {
												if (x[1] <= -1.2) {
													if (x[1] <= -1.56) {
														if (x[0] <= 8.36) {
															if (x[1] <= -1.64) {
																return 1.0f;
															}
															else {
																if (x[0] <= 8.34) {
																	if (x[1] <= -1.59) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 8.33) {
																			if (x[0] <= 8.32) {
																				return 1.0f;
																			}
																			else {
																				if (x[1] <= -1.57) {
																					return 1.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= -1.62) {
																		if (x[0] <= 8.35) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[0] <= 8.4) {
																if (x[1] <= -1.66) {
																	if (x[1] <= -1.69) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 8.38) {
																			if (x[1] <= -1.67) {
																				return 1.0f;
																			}
																			else {
																				if (x[0] <= 8.37) {
																					return 1.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 8.31) {
															if (x[1] <= -1.54) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 8.38) {
														if (x[1] <= -0.92) {
															if (x[0] <= 8.36) {
																return 1.0f;
															}
															else {
																if (x[1] <= -1.18) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= -0.94) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 8.37) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[0] <= 8.35) {
																if (x[1] <= -0.89) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 8.33) {
																		if (x[0] <= 8.32) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= -0.87) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -0.99) {
															if (x[1] <= -1.15) {
																if (x[0] <= 8.41) {
																	if (x[1] <= -1.18) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 8.4) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= -1.17) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= -1.16) {
																					return 1.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 8.42) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= -1.02) {
																		if (x[0] <= 8.44) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= -1.13) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= -1.06) {
																					if (x[1] <= -1.12) {
																						if (x[0] <= 8.47) {
																							return 1.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 1.0f;
																					}

																				}
																				else {
																					if (x[0] <= 8.46) {
																						if (x[0] <= 8.45) {
																							return 1.0f;
																						}
																						else {
																							if (x[1] <= -1.04) {
																								return 1.0f;
																							}
																							else {
																								return 0.0f;
																							}

																						}

																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[0] <= 8.43) {
																			if (x[1] <= -1.01) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[0] <= 8.4) {
																if (x[1] <= -0.96) {
																	if (x[1] <= -0.97) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 8.39) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= -1.84) {
											if (x[0] <= 8.52) {
												if (x[1] <= -1.87) {
													if (x[0] <= 8.51) {
														return 1.0f;
													}
													else {
														if (x[1] <= -1.89) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 8.49) {
														return 1.0f;
													}
													else {
														if (x[0] <= 8.5) {
															if (x[1] <= -1.86) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[0] <= 8.49) {
												if (x[1] <= -1.1) {
													return 0.0f;
												}
												else {
													if (x[1] <= -1.09) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[0] <= 8.01) {
								if (x[1] <= -0.36) {
									if (x[0] <= 7.94) {
										if (x[1] <= -0.37) {
											return 1.0f;
										}
										else {
											if (x[0] <= 7.93) {
												return 1.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= -0.46) {
											return 1.0f;
										}
										else {
											if (x[1] <= -0.39) {
												if (x[0] <= 7.96) {
													return 1.0f;
												}
												else {
													if (x[1] <= -0.42) {
														if (x[0] <= 7.98) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.99) {
																if (x[1] <= -0.44) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 0.37) {
										if (x[1] <= -0.12) {
											if (x[0] <= 7.83) {
												if (x[1] <= -0.22) {
													if (x[0] <= 7.82) {
														return 1.0f;
													}
													else {
														if (x[1] <= -0.24) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.76) {
														if (x[0] <= 7.75) {
															return 1.0f;
														}
														else {
															if (x[1] <= -0.14) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -0.16) {
															if (x[0] <= 7.78) {
																return 1.0f;
															}
															else {
																if (x[1] <= -0.19) {
																	if (x[0] <= 7.8) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 7.81) {
																			if (x[1] <= -0.21) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -0.26) {
													if (x[0] <= 7.9) {
														if (x[1] <= -0.32) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.88) {
																if (x[1] <= -0.29) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 7.86) {
																		if (x[0] <= 7.85) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= -0.27) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 7.92) {
															if (x[1] <= -0.34) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 7.73) {
												if (x[1] <= -0.07) {
													if (x[1] <= -0.09) {
														return 1.0f;
													}
													else {
														if (x[0] <= 7.71) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.05) {
														if (x[0] <= 7.71) {
															if (x[1] <= 0.01) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.35) {
													return 0.0f;
												}
												else {
													if (x[0] <= 7.95) {
														return 0.0f;
													}
													else {
														if (x[1] <= 0.36) {
															if (x[0] <= 7.99) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 1.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.91) {
											if (x[0] <= 7.92) {
												if (x[1] <= 0.41) {
													if (x[0] <= 7.81) {
														if (x[1] <= 0.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 7.77) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.39) {
															if (x[0] <= 7.85) {
																return 0.0f;
															}
															else {
																if (x[1] <= 0.38) {
																	if (x[0] <= 7.89) {
																		return 0.0f;
																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	return 1.0f;
																}

															}

														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.88) {
														if (x[1] <= 0.42) {
															if (x[0] <= 7.72) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}
														else {
															return 1.0f;
														}

													}
													else {
														if (x[1] <= 0.78) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.9) {
																if (x[1] <= 0.84) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 7.89) {
																		if (x[1] <= 0.88) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= 0.81) {
																	if (x[0] <= 7.91) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= 0.64) {
													if (x[0] <= 7.97) {
														if (x[1] <= 0.61) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.96) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.51) {
															if (x[1] <= 0.48) {
																return 1.0f;
															}
															else {
																if (x[0] <= 8.0) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 7.99) {
																if (x[1] <= 0.58) {
																	if (x[0] <= 7.98) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 0.54) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 7.95) {
														if (x[1] <= 0.74) {
															if (x[1] <= 0.68) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.93) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 7.94) {
																		if (x[1] <= 0.71) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 7.83) {
												if (x[1] <= 1.18) {
													if (x[0] <= 7.8) {
														return 1.0f;
													}
													else {
														if (x[1] <= 1.08) {
															return 1.0f;
														}
														else {
															if (x[1] <= 1.14) {
																if (x[0] <= 7.81) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 7.82) {
																		if (x[1] <= 1.11) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 7.77) {
														if (x[1] <= 1.31) {
															if (x[0] <= 7.76) {
																return 1.0f;
															}
															else {
																if (x[1] <= 1.28) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 7.74) {
																if (x[1] <= 1.38) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 7.72) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 7.73) {
																			if (x[1] <= 1.41) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 1.34) {
																	if (x[0] <= 7.75) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 1.24) {
															if (x[0] <= 7.79) {
																if (x[0] <= 7.78) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 1.21) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 7.87) {
													if (x[1] <= 1.04) {
														if (x[0] <= 7.85) {
															if (x[1] <= 1.01) {
																return 1.0f;
															}
															else {
																if (x[0] <= 7.84) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.98) {
																if (x[0] <= 7.86) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 0.94) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}

							}
							else {
								if (x[0] <= 8.11) {
									if (x[1] <= -0.49) {
										if (x[0] <= 8.05) {
											if (x[1] <= -0.52) {
												return 1.0f;
											}
											else {
												if (x[0] <= 8.03) {
													return 1.0f;
												}
												else {
													if (x[1] <= -0.51) {
														if (x[0] <= 8.04) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -0.56) {
												if (x[0] <= 8.08) {
													return 1.0f;
												}
												else {
													if (x[1] <= -0.59) {
														return 1.0f;
													}
													else {
														if (x[0] <= 8.09) {
															if (x[1] <= -0.57) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 8.06) {
													if (x[1] <= -0.54) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 8.04) {
											if (x[1] <= 0.44) {
												if (x[1] <= 0.35) {
													return 0.0f;
												}
												else {
													if (x[0] <= 8.02) {
														return 1.0f;
													}
													else {
														if (x[1] <= 0.38) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.03) {
																if (x[1] <= 0.41) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									return 0.0f;
								}

							}

						}

					}

				}
				else {
					if (x[1] <= 1.85) {
						if (x[0] <= 7.74) {
							if (x[1] <= 1.69) {
								if (x[0] <= 7.71) {
									if (x[1] <= 1.48) {
										return 1.0f;
									}
									else {
										if (x[1] <= 1.66) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[0] <= 7.73) {
									if (x[1] <= 1.71) {
										if (x[0] <= 7.72) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[1] <= 1.77) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[0] <= 7.75) {
								if (x[1] <= 1.83) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								return 0.0f;
							}

						}

					}
					else {
						return 0.0f;
					}

				}

			}
			else {
				if (x[0] <= 8.99) {
					if (x[1] <= -2.19) {
						if (x[1] <= -2.75) {
							return 0.0f;
						}
						else {
							if (x[1] <= -2.44) {
								if (x[0] <= 8.89) {
									if (x[1] <= -2.74) {
										if (x[0] <= 8.75) {
											return 1.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[0] <= 8.86) {
											if (x[1] <= -2.73) {
												if (x[0] <= 8.77) {
													return 1.0f;
												}
												else {
													if (x[0] <= 8.79) {
														return 0.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[1] <= -2.49) {
												return 1.0f;
											}
											else {
												if (x[1] <= -2.46) {
													if (x[0] <= 8.88) {
														if (x[1] <= -2.47) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.87) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= -2.56) {
										if (x[1] <= -2.73) {
											if (x[0] <= 8.91) {
												if (x[1] <= -2.74) {
													return 0.0f;
												}
												else {
													return 1.0f;
												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[0] <= 8.94) {
												if (x[1] <= -2.57) {
													return 1.0f;
												}
												else {
													if (x[0] <= 8.93) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= -2.59) {
													if (x[1] <= -2.72) {
														return 0.0f;
													}
													else {
														if (x[1] <= -2.66) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.96) {
																return 1.0f;
															}
															else {
																if (x[1] <= -2.62) {
																	if (x[0] <= 8.97) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 8.98) {
																			if (x[1] <= -2.64) {
																				return 1.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 8.92) {
											if (x[1] <= -2.51) {
												if (x[1] <= -2.54) {
													return 1.0f;
												}
												else {
													if (x[0] <= 8.91) {
														if (x[1] <= -2.52) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.9) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (x[0] <= 8.82) {
									if (x[1] <= -2.32) {
										if (x[0] <= 8.79) {
											return 1.0f;
										}
										else {
											if (x[1] <= -2.37) {
												return 1.0f;
											}
											else {
												if (x[1] <= -2.34) {
													if (x[0] <= 8.8) {
														return 1.0f;
													}
													else {
														if (x[1] <= -2.36) {
															if (x[0] <= 8.81) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 8.76) {
											if (x[1] <= -2.27) {
												return 1.0f;
											}
											else {
												if (x[0] <= 8.73) {
													if (x[1] <= -2.22) {
														return 1.0f;
													}
													else {
														if (x[0] <= 8.71) {
															return 1.0f;
														}
														else {
															if (x[1] <= -2.21) {
																if (x[0] <= 8.72) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -2.24) {
														if (x[0] <= 8.74) {
															return 1.0f;
														}
														else {
															if (x[1] <= -2.26) {
																if (x[0] <= 8.75) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -2.29) {
												if (x[0] <= 8.77) {
													return 1.0f;
												}
												else {
													if (x[0] <= 8.78) {
														if (x[1] <= -2.31) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 8.85) {
										if (x[1] <= -2.39) {
											if (x[1] <= -2.42) {
												return 1.0f;
											}
											else {
												if (x[0] <= 8.83) {
													return 1.0f;
												}
												else {
													if (x[1] <= -2.41) {
														if (x[0] <= 8.84) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}

					}
					else {
						return 0.0f;
					}

				}
				else {
					if (x[0] <= 9.01) {
						if (x[1] <= -2.69) {
							if (x[1] <= -2.72) {
								return 0.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							return 0.0f;
						}

					}
					else {
						return 0.0f;
					}

				}

			}

		}

	}

}