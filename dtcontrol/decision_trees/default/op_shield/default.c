#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.05f,4.85f,0.25f,-0.05f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 22.1) {
		if (x[1] <= 7.4) {
			if (x[1] <= 5.0) {
				return 9.0f;
			}
			else {
				if (x[2] <= 0.75) {
					if (x[0] <= 17.8) {
						if (x[0] <= 7.0) {
							if (x[0] <= 3.7) {
								if (x[3] <= 0.8) {
									if (x[1] <= 5.9) {
										if (x[0] <= 1.5) {
											if (x[0] <= 1.2) {
												return 0.0f;
											}
											else {
												if (x[3] <= 0.6) {
													if (x[1] <= 5.2) {
														if (x[3] <= 0.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 1.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 5.5) {
														if (x[1] <= 5.2) {
															return 9.0f;
														}
														else {
															if (x[0] <= 1.3) {
																return 0.0f;
															}
															else {
																if (x[1] <= 5.4) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 1.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
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
											if (x[3] <= 0.4) {
												if (x[1] <= 5.3) {
													if (x[3] <= 0.0) {
														if (x[0] <= 1.8) {
															return 0.0f;
														}
														else {
															if (x[0] <= 1.9) {
																if (x[1] <= 5.2) {
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
													else {
														if (x[0] <= 1.9) {
															if (x[0] <= 1.6) {
																return 0.0f;
															}
															else {
																if (x[3] <= 0.2) {
																	if (x[0] <= 1.8) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 5.2) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 1.7) {
																		if (x[1] <= 5.2) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[3] <= 0.2) {
														return 0.0f;
													}
													else {
														if (x[1] <= 5.6) {
															if (x[0] <= 1.9) {
																if (x[0] <= 1.7) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 5.4) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 1.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 5.5) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 1.8) {
													if (x[1] <= 5.4) {
														return 9.0f;
													}
													else {
														if (x[3] <= 0.6) {
															if (x[1] <= 5.7) {
																if (x[0] <= 1.7) {
																	if (x[1] <= 5.5) {
																		if (x[0] <= 1.6) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[0] <= 1.6) {
																if (x[1] <= 5.7) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 5.8) {
														return 9.0f;
													}
													else {
														if (x[0] <= 3.6) {
															if (x[0] <= 1.9) {
																if (x[3] <= 0.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
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
										if (x[1] <= 6.2) {
											if (x[3] <= 0.6) {
												return 0.0f;
											}
											else {
												if (x[0] <= 1.8) {
													return 0.0f;
												}
												else {
													if (x[0] <= 3.4) {
														if (x[0] <= 1.9) {
															if (x[1] <= 6.1) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[0] <= 3.6) {
															if (x[1] <= 6.1) {
																return 9.0f;
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
									if (x[0] <= 1.0) {
										if (x[1] <= 5.9) {
											if (x[3] <= 1.4) {
												if (x[0] <= 0.6) {
													return 0.0f;
												}
												else {
													if (x[3] <= 1.2) {
														if (x[1] <= 5.4) {
															if (x[0] <= 0.8) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.0) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 0.9) {
																		if (x[1] <= 5.2) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 5.4) {
															if (x[0] <= 0.7) {
																if (x[1] <= 5.2) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 0.8) {
																return 0.0f;
															}
															else {
																if (x[1] <= 5.7) {
																	if (x[0] <= 0.9) {
																		if (x[1] <= 5.5) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
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
												if (x[0] <= 0.5) {
													if (x[3] <= 1.8) {
														if (x[1] <= 5.5) {
															if (x[0] <= 0.2) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.6) {
																	if (x[0] <= 0.4) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 5.2) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= 5.2) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 0.3) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 5.4) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 0.4) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
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
														if (x[1] <= 5.5) {
															if (x[0] <= 0.2) {
																if (x[1] <= 5.2) {
																	return 9.0f;
																}
																else {
																	if (x[3] <= 2.0) {
																		if (x[0] <= 0.1) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 5.4) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 0.3) {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 0.1) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 0.2) {
																			if (x[1] <= 5.7) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[0] <= 0.4) {
																	if (x[1] <= 5.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													if (x[3] <= 1.6) {
														if (x[1] <= 5.4) {
															return 9.0f;
														}
														else {
															if (x[0] <= 0.8) {
																if (x[1] <= 5.7) {
																	if (x[0] <= 0.7) {
																		if (x[1] <= 5.5) {
																			if (x[0] <= 0.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 0.6) {
															if (x[1] <= 5.7) {
																return 9.0f;
															}
															else {
																if (x[3] <= 1.8) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}
										else {
											if (x[3] <= 1.6) {
												return 0.0f;
											}
											else {
												if (x[0] <= 0.6) {
													if (x[1] <= 6.2) {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[0] <= 0.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 6.4) {
														if (x[3] <= 1.8) {
															if (x[0] <= 0.8) {
																return 0.0f;
															}
															else {
																if (x[1] <= 6.2) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 6.2) {
																return 9.0f;
															}
															else {
																if (x[0] <= 0.8) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[3] <= 2.0) {
															if (x[1] <= 6.5) {
																if (x[0] <= 0.9) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= 6.9) {
																if (x[0] <= 0.8) {
																	if (x[1] <= 6.5) {
																		if (x[0] <= 0.7) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 6.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 0.9) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
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

									}
									else {
										if (x[1] <= 6.4) {
											if (x[1] <= 5.8) {
												if (x[0] <= 1.4) {
													if (x[3] <= 1.2) {
														if (x[1] <= 5.5) {
															if (x[0] <= 1.2) {
																if (x[3] <= 1.0) {
																	if (x[1] <= 5.2) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 1.1) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 5.4) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 1.1) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.0) {
																	if (x[0] <= 1.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 5.7) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 1.2) {
																		if (x[1] <= 5.7) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												if (x[0] <= 3.4) {
													if (x[0] <= 1.6) {
														if (x[3] <= 1.4) {
															if (x[0] <= 1.4) {
																if (x[3] <= 1.2) {
																	if (x[1] <= 5.9) {
																		if (x[0] <= 1.2) {
																			return 0.0f;
																		}
																		else {
																			if (x[3] <= 1.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 6.2) {
																		if (x[0] <= 1.2) {
																			if (x[1] <= 5.9) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[3] <= 1.0) {
																	if (x[1] <= 5.9) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 6.2) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 1.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[3] <= 1.6) {
																if (x[0] <= 1.2) {
																	if (x[1] <= 6.2) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 1.8) {
															if (x[3] <= 1.0) {
																if (x[1] <= 6.2) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[1] <= 6.1) {
														if (x[0] <= 3.6) {
															return 9.0f;
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
											if (x[0] <= 3.2) {
												if (x[3] <= 1.4) {
													if (x[1] <= 6.8) {
														if (x[0] <= 1.7) {
															if (x[0] <= 1.5) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 6.5) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 1.6) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 6.7) {
																				return 9.0f;
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
															if (x[3] <= 1.0) {
																if (x[1] <= 6.5) {
																	if (x[0] <= 1.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 6.7) {
																	if (x[0] <= 1.8) {
																		if (x[3] <= 1.2) {
																			if (x[1] <= 6.5) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 3.0) {
																		if (x[0] <= 1.9) {
																			if (x[3] <= 1.2) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
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
														if (x[3] <= 1.2) {
															return 0.0f;
														}
														else {
															if (x[1] <= 7.1) {
																if (x[0] <= 1.7) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 3.0) {
																		if (x[0] <= 1.9) {
																			if (x[1] <= 6.9) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 1.8) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 7.0) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[0] <= 2.8) {
																				return 9.0f;
																			}
																			else {
																				if (x[1] <= 7.0) {
																					return 9.0f;
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

													}

												}
												else {
													if (x[0] <= 1.4) {
														if (x[3] <= 1.8) {
															if (x[1] <= 6.9) {
																if (x[0] <= 1.2) {
																	if (x[1] <= 6.5) {
																		if (x[0] <= 1.1) {
																			return 0.0f;
																		}
																		else {
																			if (x[3] <= 1.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[3] <= 1.6) {
																		if (x[1] <= 6.5) {
																			if (x[0] <= 1.3) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[1] <= 6.7) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 1.3) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
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
															if (x[1] <= 7.0) {
																if (x[0] <= 1.2) {
																	if (x[1] <= 6.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 2.0) {
																			if (x[0] <= 1.1) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 6.9) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[3] <= 2.0) {
																	if (x[0] <= 1.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 7.2) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 1.2) {
																		if (x[0] <= 1.1) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 7.2) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[0] <= 2.8) {
															if (x[0] <= 1.7) {
																if (x[3] <= 1.8) {
																	if (x[1] <= 7.0) {
																		if (x[1] <= 6.7) {
																			return 9.0f;
																		}
																		else {
																			if (x[3] <= 1.6) {
																				if (x[0] <= 1.5) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 6.9) {
																						return 9.0f;
																					}
																					else {
																						if (x[0] <= 1.6) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		if (x[3] <= 1.6) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 1.5) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 1.6) {
																					if (x[1] <= 7.2) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[1] <= 7.3) {
																	if (x[0] <= 1.8) {
																		if (x[1] <= 7.2) {
																			return 9.0f;
																		}
																		else {
																			if (x[3] <= 1.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 2.6) {
																		if (x[0] <= 1.9) {
																			if (x[3] <= 1.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 7.0) {
																if (x[0] <= 3.0) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 6.7) {
																		return 9.0f;
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

							}
							else {
								if (x[0] <= 6.2) {
									if (x[1] <= 5.5) {
										if (x[0] <= 4.0) {
											if (x[0] <= 3.9) {
												if (x[3] <= 0.2) {
													if (x[1] <= 5.3) {
														if (x[3] <= 0.0) {
															return 1.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												if (x[1] <= 5.2) {
													if (x[3] <= 0.0) {
														return 1.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[3] <= 1.6) {
												if (x[0] <= 6.1) {
													return 0.0f;
												}
												else {
													if (x[3] <= 1.4) {
														return 0.0f;
													}
													else {
														if (x[1] <= 5.2) {
															return 9.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 5.7) {
													if (x[0] <= 5.5) {
														return 0.0f;
													}
													else {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[1] <= 5.2) {
																return 9.0f;
															}
															else {
																if (x[0] <= 5.6) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 5.4) {
																		return 9.0f;
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
													if (x[0] <= 5.9) {
														if (x[3] <= 1.8) {
															return 0.0f;
														}
														else {
															if (x[1] <= 5.2) {
																return 9.0f;
															}
															else {
																if (x[3] <= 2.0) {
																	if (x[0] <= 5.8) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 5.4) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[3] <= 1.8) {
															if (x[1] <= 5.2) {
																return 9.0f;
															}
															else {
																if (x[0] <= 6.0) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 5.4) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 6.1) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[3] <= 1.8) {
											return 0.0f;
										}
										else {
											if (x[0] <= 5.8) {
												return 0.0f;
											}
											else {
												if (x[1] <= 5.9) {
													if (x[0] <= 6.0) {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[1] <= 6.4) {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[0] <= 6.0) {
																return 0.0f;
															}
															else {
																if (x[1] <= 6.2) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 6.1) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
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

								}
								else {
									if (x[3] <= 1.2) {
										if (x[1] <= 5.9) {
											if (x[3] <= 0.8) {
												if (x[0] <= 6.9) {
													return 0.0f;
												}
												else {
													if (x[1] <= 5.2) {
														if (x[3] <= 0.6) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 6.7) {
													if (x[0] <= 6.5) {
														return 0.0f;
													}
													else {
														if (x[1] <= 5.4) {
															if (x[3] <= 1.0) {
																return 0.0f;
															}
															else {
																if (x[0] <= 6.6) {
																	if (x[1] <= 5.2) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 5.5) {
														if (x[3] <= 1.0) {
															if (x[1] <= 5.2) {
																return 9.0f;
															}
															else {
																if (x[0] <= 6.8) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 5.4) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 6.9) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[3] <= 1.0) {
															return 0.0f;
														}
														else {
															if (x[0] <= 6.8) {
																return 0.0f;
															}
															else {
																return 9.0f;
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
										if (x[1] <= 6.2) {
											if (x[3] <= 1.6) {
												if (x[0] <= 6.6) {
													if (x[1] <= 5.5) {
														if (x[0] <= 6.4) {
															if (x[3] <= 1.4) {
																if (x[1] <= 5.2) {
																	if (x[0] <= 6.3) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 5.4) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 6.3) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 5.4) {
																return 9.0f;
															}
															else {
																if (x[0] <= 6.5) {
																	if (x[3] <= 1.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 6.4) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.4) {
																return 0.0f;
															}
															else {
																if (x[1] <= 5.9) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= 5.9) {
														return 9.0f;
													}
													else {
														if (x[0] <= 6.8) {
															if (x[3] <= 1.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 6.4) {
													if (x[1] <= 5.9) {
														return 9.0f;
													}
													else {
														if (x[3] <= 1.8) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											if (x[3] <= 1.6) {
												if (x[0] <= 6.7) {
													return 0.0f;
												}
												else {
													if (x[1] <= 6.7) {
														if (x[3] <= 1.4) {
															if (x[0] <= 6.9) {
																return 0.0f;
															}
															else {
																if (x[1] <= 6.4) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 6.8) {
																if (x[1] <= 6.4) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 6.6) {
													if (x[1] <= 6.7) {
														if (x[3] <= 1.8) {
															if (x[0] <= 6.5) {
																return 0.0f;
															}
															else {
																if (x[1] <= 6.4) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 6.4) {
																if (x[3] <= 2.0) {
																	if (x[1] <= 6.4) {
																		if (x[0] <= 6.3) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[0] <= 6.4) {
																return 0.0f;
															}
															else {
																if (x[1] <= 7.0) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 6.5) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 7.2) {
																			return 9.0f;
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
													if (x[1] <= 6.7) {
														return 9.0f;
													}
													else {
														if (x[3] <= 1.8) {
															if (x[0] <= 6.8) {
																return 0.0f;
															}
															else {
																if (x[1] <= 7.0) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 6.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 7.2) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[0] <= 6.8) {
																if (x[1] <= 7.0) {
																	return 9.0f;
																}
																else {
																	if (x[3] <= 2.0) {
																		if (x[0] <= 6.7) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 7.2) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
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
							if (x[0] <= 11.6) {
								if (x[3] <= 0.6) {
									if (x[1] <= 6.5) {
										if (x[0] <= 7.8) {
											if (x[0] <= 7.4) {
												if (x[1] <= 5.5) {
													if (x[3] <= 0.4) {
														if (x[0] <= 7.3) {
															return 0.0f;
														}
														else {
															if (x[1] <= 5.2) {
																if (x[3] <= 0.2) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 7.2) {
															if (x[1] <= 5.2) {
																if (x[0] <= 7.1) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= 5.4) {
																return 9.0f;
															}
															else {
																if (x[0] <= 7.3) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
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
												if (x[1] <= 5.5) {
													if (x[3] <= 0.2) {
														if (x[3] <= 0.0) {
															if (x[0] <= 7.6) {
																if (x[1] <= 5.2) {
																	if (x[0] <= 7.5) {
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
																if (x[1] <= 5.1) {
																	if (x[0] <= 7.7) {
																		return 1.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[1] <= 5.4) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 7.7) {
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
															if (x[0] <= 7.6) {
																if (x[1] <= 5.2) {
																	if (x[0] <= 7.5) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 5.4) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 7.7) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 5.4) {
															return 9.0f;
														}
														else {
															if (x[0] <= 7.5) {
																if (x[3] <= 0.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[3] <= 0.2) {
														return 0.0f;
													}
													else {
														if (x[1] <= 5.9) {
															if (x[0] <= 7.6) {
																if (x[3] <= 0.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 7.6) {
																return 0.0f;
															}
															else {
																if (x[3] <= 0.4) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 6.2) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 7.7) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 6.4) {
																				return 9.0f;
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
											if (x[3] <= 0.0) {
												if (x[1] <= 5.8) {
													if (x[1] <= 5.5) {
														if (x[0] <= 11.4) {
															if (x[0] <= 7.9) {
																if (x[1] <= 5.3) {
																	return 9.0f;
																}
																else {
																	return 1.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[1] <= 5.3) {
																return 9.0f;
															}
															else {
																if (x[0] <= 11.5) {
																	if (x[1] <= 5.4) {
																		return 9.0f;
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
														if (x[0] <= 11.1) {
															if (x[0] <= 8.4) {
																if (x[0] <= 8.0) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 5.6) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 8.2) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= 5.7) {
																				return 9.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[0] <= 11.0) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 5.7) {
																		return 9.0f;
																	}
																	else {
																		return 1.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 5.6) {
																if (x[0] <= 11.3) {
																	return 9.0f;
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
													if (x[0] <= 8.6) {
														if (x[1] <= 6.2) {
															if (x[0] <= 8.2) {
																if (x[1] <= 6.0) {
																	if (x[0] <= 8.0) {
																		if (x[0] <= 7.9) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 5.9) {
																				return 1.0f;
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
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 6.1) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 8.4) {
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
														if (x[0] <= 10.9) {
															if (x[1] <= 6.2) {
																if (x[0] <= 9.0) {
																	if (x[1] <= 6.0) {
																		if (x[0] <= 8.8) {
																			if (x[1] <= 5.9) {
																				return 9.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 1.0f;
																	}

																}
																else {
																	if (x[0] <= 10.5) {
																		if (x[0] <= 9.2) {
																			if (x[1] <= 6.1) {
																				return 9.0f;
																			}
																			else {
																				return 1.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		if (x[1] <= 6.0) {
																			if (x[0] <= 10.8) {
																				return 9.0f;
																			}
																			else {
																				if (x[1] <= 5.9) {
																					return 9.0f;
																				}
																				else {
																					return 1.0f;
																				}

																			}

																		}
																		else {
																			if (x[0] <= 10.6) {
																				if (x[1] <= 6.1) {
																					return 9.0f;
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
																if (x[0] <= 9.4) {
																	if (x[0] <= 9.0) {
																		if (x[1] <= 6.3) {
																			return 1.0f;
																		}
																		else {
																			if (x[0] <= 8.8) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 6.4) {
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
																else {
																	if (x[0] <= 10.4) {
																		if (x[1] <= 6.3) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 9.6) {
																				return 1.0f;
																			}
																			else {
																				if (x[1] <= 6.4) {
																					if (x[0] <= 10.3) {
																						return 9.0f;
																					}
																					else {
																						return 1.0f;
																					}

																				}
																				else {
																					if (x[0] <= 10.1) {
																						if (x[0] <= 9.8) {
																							return 1.0f;
																						}
																						else {
																							return 9.0f;
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
																		if (x[0] <= 10.8) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= 6.4) {
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
														else {
															if (x[1] <= 6.1) {
																if (x[0] <= 11.3) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 11.5) {
																		if (x[1] <= 5.9) {
																			return 1.0f;
																		}
																		else {
																			if (x[0] <= 11.4) {
																				if (x[1] <= 6.0) {
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
																if (x[0] <= 11.1) {
																	if (x[1] <= 6.3) {
																		if (x[0] <= 11.0) {
																			return 1.0f;
																		}
																		else {
																			if (x[1] <= 6.2) {
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

											}
											else {
												if (x[1] <= 6.0) {
													if (x[1] <= 5.8) {
														return 9.0f;
													}
													else {
														if (x[3] <= 0.2) {
															if (x[0] <= 8.0) {
																if (x[0] <= 7.9) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 5.9) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 11.4) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 11.5) {
																		if (x[1] <= 5.9) {
																			return 9.0f;
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
															return 9.0f;
														}

													}

												}
												else {
													if (x[3] <= 0.2) {
														if (x[0] <= 8.6) {
															if (x[1] <= 6.2) {
																if (x[0] <= 8.2) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 8.4) {
																		if (x[1] <= 6.1) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[0] <= 11.0) {
																if (x[1] <= 6.3) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 9.0) {
																		if (x[0] <= 8.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 6.4) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		if (x[0] <= 10.8) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 10.9) {
																				if (x[1] <= 6.4) {
																					return 9.0f;
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
																if (x[1] <= 6.2) {
																	if (x[0] <= 11.3) {
																		if (x[1] <= 6.1) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 11.1) {
																				return 9.0f;
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
														if (x[0] <= 8.2) {
															if (x[3] <= 0.4) {
																if (x[1] <= 6.4) {
																	if (x[0] <= 8.0) {
																		if (x[1] <= 6.2) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 7.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 6.3) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 11.4) {
																return 9.0f;
															}
															else {
																if (x[1] <= 6.3) {
																	return 9.0f;
																}
																else {
																	if (x[3] <= 0.4) {
																		if (x[0] <= 11.5) {
																			if (x[1] <= 6.4) {
																				return 9.0f;
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
																		return 9.0f;
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
										if (x[3] <= 0.2) {
											if (x[0] <= 9.2) {
												return 0.0f;
											}
											else {
												if (x[1] <= 6.9) {
													if (x[0] <= 10.6) {
														if (x[3] <= 0.0) {
															if (x[1] <= 6.6) {
																return 1.0f;
															}
															else {
																if (x[0] <= 9.6) {
																	if (x[1] <= 6.7) {
																		if (x[0] <= 9.4) {
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
																	if (x[0] <= 10.4) {
																		if (x[1] <= 6.8) {
																			return 1.0f;
																		}
																		else {
																			if (x[0] <= 9.8) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 10.3) {
																					return 1.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[1] <= 6.7) {
																			if (x[0] <= 10.5) {
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
															if (x[1] <= 6.6) {
																return 9.0f;
															}
															else {
																if (x[0] <= 9.6) {
																	if (x[1] <= 6.7) {
																		if (x[0] <= 9.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[0] <= 10.4) {
																		if (x[1] <= 6.8) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 9.8) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 10.3) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[1] <= 6.7) {
																			if (x[0] <= 10.5) {
																				return 9.0f;
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
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 7.0) {
														if (x[0] <= 10.1) {
															if (x[0] <= 9.9) {
																return 0.0f;
															}
															else {
																if (x[3] <= 0.0) {
																	return 1.0f;
																}
																else {
																	return 9.0f;
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
											if (x[0] <= 8.6) {
												if (x[0] <= 7.8) {
													return 0.0f;
												}
												else {
													if (x[1] <= 7.0) {
														if (x[3] <= 0.4) {
															if (x[1] <= 6.6) {
																if (x[0] <= 8.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= 6.8) {
																if (x[0] <= 8.0) {
																	if (x[1] <= 6.6) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 7.9) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 6.7) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[0] <= 8.2) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 8.4) {
																		if (x[1] <= 6.9) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
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
												if (x[0] <= 11.0) {
													if (x[1] <= 7.0) {
														if (x[3] <= 0.4) {
															if (x[0] <= 9.2) {
																if (x[1] <= 6.7) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 8.8) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 6.8) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 9.0) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 6.9) {
																					return 9.0f;
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
																if (x[0] <= 10.8) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 6.8) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 10.9) {
																			if (x[1] <= 6.9) {
																				return 9.0f;
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
															return 9.0f;
														}

													}
													else {
														if (x[3] <= 0.4) {
															if (x[0] <= 9.4) {
																return 0.0f;
															}
															else {
																if (x[0] <= 10.5) {
																	if (x[0] <= 9.7) {
																		if (x[1] <= 7.1) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 9.6) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 7.2) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[1] <= 7.2) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 10.3) {
																				if (x[0] <= 9.8) {
																					if (x[1] <= 7.3) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				if (x[0] <= 10.4) {
																					if (x[1] <= 7.3) {
																						return 9.0f;
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
																	if (x[0] <= 10.6) {
																		if (x[1] <= 7.1) {
																			return 9.0f;
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
															if (x[0] <= 9.2) {
																if (x[1] <= 7.2) {
																	if (x[0] <= 8.8) {
																		if (x[1] <= 7.1) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 9.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 7.3) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[0] <= 10.9) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 7.3) {
																		return 9.0f;
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
													if (x[3] <= 0.4) {
														if (x[1] <= 6.7) {
															if (x[0] <= 11.3) {
																if (x[1] <= 6.6) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 11.1) {
																		return 9.0f;
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
														if (x[1] <= 7.1) {
															if (x[0] <= 11.3) {
																return 9.0f;
															}
															else {
																if (x[1] <= 6.8) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 11.5) {
																		if (x[1] <= 6.9) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 11.4) {
																				if (x[1] <= 7.0) {
																					return 9.0f;
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
															if (x[0] <= 11.1) {
																if (x[1] <= 7.2) {
																	return 9.0f;
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
									if (x[0] <= 7.7) {
										if (x[3] <= 1.2) {
											if (x[1] <= 6.2) {
												if (x[0] <= 7.4) {
													if (x[3] <= 0.8) {
														if (x[1] <= 5.9) {
															if (x[0] <= 7.2) {
																if (x[1] <= 5.4) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 5.5) {
																		if (x[0] <= 7.1) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 5.9) {
															return 9.0f;
														}
														else {
															if (x[0] <= 7.2) {
																if (x[3] <= 1.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												if (x[0] <= 7.4) {
													if (x[1] <= 6.7) {
														if (x[3] <= 1.0) {
															if (x[0] <= 7.3) {
																return 0.0f;
															}
															else {
																if (x[1] <= 6.4) {
																	if (x[3] <= 0.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 7.2) {
																if (x[1] <= 6.4) {
																	if (x[0] <= 7.1) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 6.7) {
														if (x[3] <= 0.8) {
															if (x[0] <= 7.6) {
																if (x[1] <= 6.4) {
																	if (x[0] <= 7.5) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[3] <= 1.0) {
															if (x[0] <= 7.6) {
																return 0.0f;
															}
															else {
																if (x[1] <= 7.0) {
																	if (x[3] <= 0.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 7.0) {
																return 9.0f;
															}
															else {
																if (x[0] <= 7.5) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 7.6) {
																		if (x[1] <= 7.2) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= 6.7) {
												return 9.0f;
											}
											else {
												if (x[3] <= 1.6) {
													if (x[0] <= 7.2) {
														if (x[3] <= 1.4) {
															return 0.0f;
														}
														else {
															if (x[1] <= 7.0) {
																return 9.0f;
															}
															else {
																if (x[0] <= 7.1) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 7.2) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[0] <= 7.4) {
															if (x[3] <= 1.4) {
																if (x[1] <= 7.0) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 7.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 7.2) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 7.1) {
											if (x[0] <= 7.9) {
												if (x[3] <= 0.8) {
													if (x[1] <= 6.7) {
														return 9.0f;
													}
													else {
														if (x[0] <= 7.8) {
															return 0.0f;
														}
														else {
															if (x[1] <= 7.0) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											if (x[0] <= 11.5) {
												if (x[0] <= 8.4) {
													if (x[3] <= 0.8) {
														if (x[0] <= 8.0) {
															return 0.0f;
														}
														else {
															if (x[1] <= 7.2) {
																return 9.0f;
															}
															else {
																if (x[0] <= 8.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 7.3) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[0] <= 7.8) {
															if (x[3] <= 1.0) {
																if (x[1] <= 7.2) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
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
								if (x[3] <= 0.8) {
									if (x[1] <= 5.8) {
										if (x[3] <= 0.0) {
											if (x[1] <= 5.4) {
												if (x[0] <= 13.8) {
													if (x[0] <= 12.0) {
														if (x[1] <= 5.2) {
															if (x[0] <= 11.8) {
																return 9.0f;
															}
															else {
																if (x[0] <= 11.9) {
																	if (x[1] <= 5.1) {
																		return 9.0f;
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
															if (x[0] <= 11.9) {
																return 1.0f;
															}
															else {
																if (x[1] <= 5.3) {
																	return 1.0f;
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
													if (x[1] <= 5.2) {
														return 1.0f;
													}
													else {
														if (x[0] <= 16.0) {
															if (x[0] <= 13.9) {
																return 0.0f;
															}
															else {
																if (x[0] <= 15.9) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 5.3) {
																		return 1.0f;
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
												if (x[0] <= 11.9) {
													if (x[1] <= 5.7) {
														if (x[0] <= 11.8) {
															return 1.0f;
														}
														else {
															if (x[1] <= 5.6) {
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
											if (x[0] <= 13.6) {
												if (x[0] <= 11.9) {
													if (x[1] <= 5.6) {
														return 9.0f;
													}
													else {
														if (x[3] <= 0.2) {
															if (x[1] <= 5.7) {
																if (x[0] <= 11.8) {
																	return 9.0f;
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
															return 9.0f;
														}

													}

												}
												else {
													if (x[0] <= 13.4) {
														if (x[0] <= 12.0) {
															if (x[1] <= 5.3) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[0] <= 13.2) {
																return 0.0f;
															}
															else {
																if (x[3] <= 0.6) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 5.4) {
																		if (x[0] <= 13.3) {
																			if (x[1] <= 5.2) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
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
														if (x[3] <= 0.4) {
															return 0.0f;
														}
														else {
															if (x[3] <= 0.6) {
																if (x[1] <= 5.4) {
																	if (x[0] <= 13.5) {
																		if (x[1] <= 5.2) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 5.7) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 13.5) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}

												}

											}
											else {
												if (x[3] <= 0.2) {
													if (x[1] <= 5.4) {
														if (x[1] <= 5.2) {
															if (x[0] <= 13.8) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 16.0) {
																if (x[0] <= 13.9) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 15.9) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 5.3) {
																			return 9.0f;
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
													if (x[1] <= 5.4) {
														if (x[0] <= 13.7) {
															if (x[3] <= 0.4) {
																if (x[1] <= 5.2) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[0] <= 15.9) {
															if (x[0] <= 13.9) {
																if (x[3] <= 0.4) {
																	if (x[0] <= 13.8) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 5.6) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= 5.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 13.7) {
																			if (x[3] <= 0.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[0] <= 15.8) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 5.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 0.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[3] <= 0.4) {
																if (x[0] <= 16.0) {
																	if (x[1] <= 5.5) {
																		return 9.0f;
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
																if (x[1] <= 5.6) {
																	if (x[0] <= 17.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 5.5) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[3] <= 0.6) {
																		if (x[0] <= 16.0) {
																			if (x[1] <= 5.7) {
																				return 9.0f;
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
																		if (x[0] <= 17.6) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 17.7) {
																				if (x[1] <= 5.7) {
																					return 9.0f;
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
									else {
										if (x[1] <= 6.6) {
											if (x[3] <= 0.4) {
												if (x[0] <= 11.9) {
													if (x[3] <= 0.2) {
														return 0.0f;
													}
													else {
														if (x[1] <= 6.2) {
															if (x[0] <= 11.8) {
																return 9.0f;
															}
															else {
																if (x[1] <= 5.9) {
																	return 9.0f;
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
												if (x[0] <= 15.9) {
													if (x[0] <= 13.8) {
														if (x[0] <= 11.8) {
															if (x[1] <= 6.5) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[0] <= 13.5) {
																if (x[0] <= 11.9) {
																	if (x[1] <= 5.9) {
																		return 9.0f;
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
																if (x[1] <= 6.2) {
																	if (x[3] <= 0.6) {
																		if (x[1] <= 5.9) {
																			if (x[0] <= 13.7) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[0] <= 13.7) {
																			if (x[1] <= 6.0) {
																				if (x[0] <= 13.6) {
																					if (x[1] <= 5.9) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
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
														if (x[1] <= 6.2) {
															if (x[0] <= 15.8) {
																if (x[0] <= 13.9) {
																	if (x[1] <= 6.0) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 0.6) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 15.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 6.1) {
																			return 9.0f;
																		}
																		else {
																			if (x[3] <= 0.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[1] <= 5.9) {
																	return 9.0f;
																}
																else {
																	if (x[3] <= 0.6) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 6.1) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[3] <= 0.6) {
																return 0.0f;
															}
															else {
																if (x[0] <= 15.7) {
																	if (x[0] <= 13.9) {
																		if (x[1] <= 6.4) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[0] <= 15.6) {
																			return 9.0f;
																		}
																		else {
																			if (x[1] <= 6.5) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[1] <= 6.3) {
																		if (x[0] <= 15.8) {
																			return 9.0f;
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
													if (x[0] <= 16.0) {
														if (x[1] <= 5.9) {
															if (x[3] <= 0.6) {
																return 0.0f;
															}
															else {
																return 9.0f;
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

								}
								else {
									if (x[0] <= 13.0) {
										if (x[1] <= 6.5) {
											if (x[0] <= 11.8) {
												return 9.0f;
											}
											else {
												if (x[3] <= 1.6) {
													if (x[1] <= 5.9) {
														if (x[0] <= 11.9) {
															return 9.0f;
														}
														else {
															if (x[0] <= 12.6) {
																if (x[1] <= 5.3) {
																	if (x[0] <= 12.0) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 1.4) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 12.4) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 5.2) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 12.5) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[0] <= 12.5) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 5.4) {
																			if (x[3] <= 1.4) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[3] <= 1.2) {
																	if (x[1] <= 5.4) {
																		if (x[0] <= 12.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[3] <= 1.0) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 12.9) {
																					if (x[1] <= 5.2) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[0] <= 12.8) {
																		if (x[3] <= 1.4) {
																			if (x[1] <= 5.4) {
																				if (x[0] <= 12.7) {
																					if (x[1] <= 5.2) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[1] <= 5.7) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 12.7) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[1] <= 5.7) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 12.9) {
																				if (x[3] <= 1.4) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}

														}

													}
													else {
														if (x[0] <= 12.8) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.4) {
																return 0.0f;
															}
															else {
																if (x[1] <= 6.2) {
																	if (x[0] <= 12.9) {
																		if (x[1] <= 6.0) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
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
													if (x[0] <= 12.5) {
														if (x[1] <= 5.9) {
															if (x[0] <= 11.9) {
																return 9.0f;
															}
															else {
																if (x[0] <= 12.3) {
																	if (x[1] <= 5.3) {
																		if (x[3] <= 1.8) {
																			if (x[0] <= 12.0) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 12.2) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 5.2) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[1] <= 5.2) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 12.1) {
																					if (x[0] <= 12.0) {
																						return 9.0f;
																					}
																					else {
																						if (x[3] <= 2.0) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[3] <= 2.0) {
																			if (x[0] <= 12.2) {
																				if (x[1] <= 5.4) {
																					if (x[0] <= 12.1) {
																						return 0.0f;
																					}
																					else {
																						if (x[3] <= 1.8) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}

																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				if (x[3] <= 1.8) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 5.7) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[0] <= 12.1) {
																				if (x[1] <= 5.6) {
																					return 9.0f;
																				}
																				else {
																					if (x[1] <= 5.7) {
																						if (x[0] <= 12.0) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[3] <= 1.8) {
																		if (x[1] <= 5.4) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 12.4) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 5.7) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[3] <= 2.0) {
																if (x[0] <= 12.4) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 6.0) {
																		if (x[3] <= 1.8) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 12.3) {
																	if (x[1] <= 6.0) {
																		if (x[0] <= 12.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 6.2) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 12.4) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 6.4) {
																				return 9.0f;
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
														if (x[1] <= 5.9) {
															return 9.0f;
														}
														else {
															if (x[0] <= 12.7) {
																if (x[3] <= 1.8) {
																	if (x[1] <= 6.0) {
																		if (x[0] <= 12.6) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 6.2) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 2.0) {
																			if (x[0] <= 12.6) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 6.4) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[3] <= 1.8) {
																	if (x[1] <= 6.2) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 12.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 6.4) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 12.9) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}

											}

										}
										else {
											if (x[3] <= 1.8) {
												if (x[0] <= 12.9) {
													return 0.0f;
												}
												else {
													if (x[3] <= 1.6) {
														return 0.0f;
													}
													else {
														if (x[1] <= 6.7) {
															return 9.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 12.7) {
													if (x[0] <= 12.5) {
														return 0.0f;
													}
													else {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[1] <= 6.9) {
																if (x[0] <= 12.6) {
																	if (x[1] <= 6.7) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 7.0) {
														if (x[1] <= 6.7) {
															return 9.0f;
														}
														else {
															if (x[0] <= 12.8) {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[1] <= 6.9) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 12.9) {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[0] <= 12.8) {
																return 0.0f;
															}
															else {
																if (x[0] <= 12.9) {
																	if (x[1] <= 7.2) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= 6.2) {
											if (x[0] <= 17.4) {
												if (x[3] <= 1.0) {
													if (x[1] <= 6.0) {
														if (x[0] <= 13.4) {
															if (x[1] <= 5.4) {
																if (x[0] <= 13.1) {
																	if (x[1] <= 5.2) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[0] <= 13.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 5.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 13.3) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 5.9) {
																				return 9.0f;
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
															return 9.0f;
														}

													}
													else {
														if (x[0] <= 16.0) {
															if (x[0] <= 13.5) {
																return 0.0f;
															}
															else {
																if (x[0] <= 15.9) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 6.1) {
																		return 9.0f;
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
													if (x[0] <= 13.3) {
														if (x[3] <= 1.2) {
															if (x[1] <= 5.7) {
																return 9.0f;
															}
															else {
																if (x[1] <= 6.0) {
																	if (x[0] <= 13.1) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 5.9) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 13.2) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
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
															if (x[1] <= 6.0) {
																return 9.0f;
															}
															else {
																if (x[3] <= 1.4) {
																	if (x[0] <= 13.1) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 17.3) {
															return 9.0f;
														}
														else {
															if (x[1] <= 6.1) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= 5.9) {
													if (x[1] <= 5.5) {
														return 9.0f;
													}
													else {
														if (x[0] <= 17.6) {
															return 9.0f;
														}
														else {
															if (x[0] <= 17.7) {
																if (x[1] <= 5.7) {
																	return 9.0f;
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
											if (x[0] <= 15.9) {
												if (x[3] <= 1.4) {
													if (x[0] <= 13.6) {
														if (x[0] <= 13.3) {
															if (x[1] <= 6.4) {
																if (x[0] <= 13.2) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.2) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= 6.9) {
																if (x[3] <= 1.2) {
																	if (x[3] <= 1.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 13.4) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 6.4) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 13.5) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 6.7) {
																						return 9.0f;
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
																	if (x[1] <= 6.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 13.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 7.0) {
																	if (x[0] <= 13.5) {
																		return 0.0f;
																	}
																	else {
																		if (x[3] <= 1.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
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
														if (x[1] <= 7.0) {
															if (x[0] <= 15.7) {
																if (x[0] <= 13.9) {
																	if (x[3] <= 1.0) {
																		if (x[1] <= 6.8) {
																			if (x[0] <= 13.7) {
																				if (x[1] <= 6.4) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				if (x[1] <= 6.7) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 13.8) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[1] <= 6.9) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 13.7) {
																				if (x[3] <= 1.2) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[0] <= 15.5) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 6.7) {
																			return 9.0f;
																		}
																		else {
																			if (x[3] <= 1.0) {
																				if (x[0] <= 15.6) {
																					if (x[1] <= 6.9) {
																						return 9.0f;
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
																				if (x[1] <= 6.9) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 15.6) {
																						return 9.0f;
																					}
																					else {
																						if (x[3] <= 1.2) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}

																				}

																			}

																		}

																	}

																}

															}
															else {
																if (x[1] <= 6.5) {
																	if (x[3] <= 1.0) {
																		if (x[0] <= 15.8) {
																			return 9.0f;
																		}
																		else {
																			if (x[1] <= 6.3) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[3] <= 1.2) {
																		if (x[1] <= 6.7) {
																			if (x[0] <= 15.8) {
																				if (x[3] <= 1.0) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
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
																		if (x[1] <= 6.7) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 15.8) {
																				if (x[1] <= 6.9) {
																					return 9.0f;
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
															if (x[3] <= 1.0) {
																return 0.0f;
															}
															else {
																if (x[0] <= 15.5) {
																	if (x[0] <= 13.9) {
																		if (x[3] <= 1.2) {
																			if (x[0] <= 13.8) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 7.2) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			if (x[0] <= 13.7) {
																				if (x[1] <= 7.2) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		if (x[0] <= 15.4) {
																			return 9.0f;
																		}
																		else {
																			if (x[1] <= 7.3) {
																				return 9.0f;
																			}
																			else {
																				if (x[3] <= 1.2) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}

																}
																else {
																	if (x[0] <= 15.6) {
																		if (x[1] <= 7.1) {
																			return 9.0f;
																		}
																		else {
																			if (x[3] <= 1.2) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 7.3) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[1] <= 7.1) {
																			if (x[0] <= 15.7) {
																				if (x[3] <= 1.2) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
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
												else {
													if (x[0] <= 13.4) {
														if (x[3] <= 1.8) {
															if (x[1] <= 6.9) {
																if (x[0] <= 13.2) {
																	if (x[3] <= 1.6) {
																		if (x[1] <= 6.4) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 13.1) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 6.7) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[0] <= 13.2) {
																	if (x[1] <= 7.0) {
																		if (x[0] <= 13.1) {
																			return 0.0f;
																		}
																		else {
																			if (x[3] <= 1.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[3] <= 1.6) {
																		if (x[1] <= 7.0) {
																			if (x[0] <= 13.3) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[1] <= 7.2) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 13.3) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}

														}
														else {
															if (x[1] <= 7.2) {
																return 9.0f;
															}
															else {
																if (x[0] <= 13.1) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 15.7) {
															if (x[1] <= 7.2) {
																return 9.0f;
															}
															else {
																if (x[0] <= 13.5) {
																	if (x[3] <= 1.6) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 15.6) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 1.6) {
																			if (x[1] <= 7.3) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[1] <= 6.9) {
																return 9.0f;
															}
															else {
																if (x[3] <= 1.8) {
																	if (x[1] <= 7.1) {
																		if (x[0] <= 15.8) {
																			return 9.0f;
																		}
																		else {
																			if (x[3] <= 1.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		if (x[0] <= 15.8) {
																			if (x[3] <= 1.6) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 7.3) {
																					return 9.0f;
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
																	if (x[1] <= 7.3) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 15.8) {
																			return 9.0f;
																		}
																		else {
																			if (x[3] <= 2.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
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
												if (x[3] <= 1.2) {
													if (x[0] <= 16.0) {
														if (x[1] <= 6.3) {
															if (x[3] <= 1.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
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
													if (x[1] <= 6.8) {
														if (x[0] <= 17.2) {
															if (x[3] <= 1.6) {
																if (x[1] <= 6.4) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 6.6) {
																		if (x[3] <= 1.4) {
																			if (x[0] <= 16.0) {
																				if (x[1] <= 6.5) {
																					return 9.0f;
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
																			if (x[0] <= 17.1) {
																				return 9.0f;
																			}
																			else {
																				if (x[1] <= 6.5) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[0] <= 16.0) {
																			if (x[1] <= 6.7) {
																				if (x[3] <= 1.4) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
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
																if (x[0] <= 16.9) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 6.7) {
																		if (x[0] <= 17.1) {
																			return 9.0f;
																		}
																		else {
																			if (x[1] <= 6.5) {
																				return 9.0f;
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
															if (x[0] <= 17.3) {
																if (x[1] <= 6.3) {
																	return 9.0f;
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
														if (x[3] <= 1.8) {
															if (x[0] <= 16.0) {
																if (x[1] <= 6.9) {
																	if (x[3] <= 1.6) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
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
															if (x[0] <= 16.9) {
																if (x[1] <= 7.0) {
																	if (x[0] <= 16.8) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 6.9) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[3] <= 2.0) {
																		if (x[0] <= 16.0) {
																			if (x[1] <= 7.1) {
																				return 9.0f;
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
																		if (x[1] <= 7.2) {
																			if (x[0] <= 16.7) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 16.8) {
																					if (x[1] <= 7.1) {
																						return 9.0f;
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
																			if (x[0] <= 16.0) {
																				if (x[1] <= 7.3) {
																					return 9.0f;
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

												}

											}

										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= 5.3) {
							if (x[0] <= 18.0) {
								if (x[0] <= 17.9) {
									if (x[3] <= 0.2) {
										if (x[1] <= 5.2) {
											if (x[3] <= 0.0) {
												return 1.0f;
											}
											else {
												return 9.0f;
											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 9.0f;
									}

								}
								else {
									if (x[1] <= 5.1) {
										if (x[3] <= 0.0) {
											return 1.0f;
										}
										else {
											return 9.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (x[3] <= 1.8) {
									return 0.0f;
								}
								else {
									if (x[0] <= 19.8) {
										return 0.0f;
									}
									else {
										if (x[3] <= 2.0) {
											if (x[0] <= 20.0) {
												return 0.0f;
											}
											else {
												if (x[1] <= 5.2) {
													return 9.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[0] <= 19.9) {
												if (x[1] <= 5.2) {
													return 9.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 9.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[3] <= 2.0) {
								return 0.0f;
							}
							else {
								if (x[0] <= 19.9) {
									return 0.0f;
								}
								else {
									if (x[1] <= 5.5) {
										if (x[0] <= 20.0) {
											if (x[1] <= 5.4) {
												return 9.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 9.0f;
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
					if (x[3] <= 0.1) {
						if (x[0] <= 17.6) {
							if (x[0] <= 6.4) {
								if (x[0] <= 3.4) {
									if (x[0] <= 0.9) {
										if (x[1] <= 6.2) {
											if (x[0] <= 0.4) {
												if (x[1] <= 5.9) {
													if (x[1] <= 5.5) {
														return 1.0f;
													}
													else {
														if (x[0] <= 0.2) {
															if (x[0] <= 0.1) {
																return 0.0f;
															}
															else {
																if (x[1] <= 5.7) {
																	return 1.0f;
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
													return 0.0f;
												}

											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[0] <= 0.6) {
												return 0.0f;
											}
											else {
												if (x[1] <= 6.7) {
													if (x[1] <= 6.4) {
														return 1.0f;
													}
													else {
														if (x[0] <= 0.8) {
															if (x[1] <= 6.5) {
																if (x[0] <= 0.7) {
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

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 6.4) {
											return 1.0f;
										}
										else {
											if (x[0] <= 2.8) {
												if (x[0] <= 1.2) {
													if (x[1] <= 6.9) {
														return 1.0f;
													}
													else {
														if (x[1] <= 7.2) {
															if (x[0] <= 1.1) {
																if (x[1] <= 7.0) {
																	if (x[0] <= 1.0) {
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

												}
												else {
													if (x[1] <= 7.3) {
														return 1.0f;
													}
													else {
														if (x[0] <= 2.6) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 7.0) {
													if (x[0] <= 3.0) {
														return 1.0f;
													}
													else {
														if (x[0] <= 3.2) {
															if (x[1] <= 6.7) {
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
									if (x[0] <= 5.8) {
										if (x[1] <= 6.1) {
											if (x[0] <= 3.9) {
												if (x[1] <= 5.5) {
													return 1.0f;
												}
												else {
													if (x[0] <= 3.6) {
														return 1.0f;
													}
													else {
														if (x[0] <= 3.7) {
															if (x[1] <= 5.8) {
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
												if (x[0] <= 5.5) {
													if (x[0] <= 4.0) {
														if (x[1] <= 5.2) {
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
												else {
													if (x[1] <= 5.5) {
														if (x[1] <= 5.2) {
															return 1.0f;
														}
														else {
															if (x[0] <= 5.6) {
																return 0.0f;
															}
															else {
																if (x[1] <= 5.4) {
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
										if (x[1] <= 5.9) {
											return 1.0f;
										}
										else {
											if (x[1] <= 6.7) {
												if (x[0] <= 6.0) {
													return 0.0f;
												}
												else {
													if (x[0] <= 6.2) {
														if (x[1] <= 6.2) {
															return 1.0f;
														}
														else {
															if (x[1] <= 6.4) {
																if (x[0] <= 6.1) {
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
														return 1.0f;
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
								if (x[0] <= 11.5) {
									if (x[1] <= 6.2) {
										if (x[0] <= 7.9) {
											if (x[0] <= 7.7) {
												return 1.0f;
											}
											else {
												if (x[1] <= 5.3) {
													if (x[0] <= 7.8) {
														if (x[1] <= 5.1) {
															return 9.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 1.0f;
												}

											}

										}
										else {
											if (x[1] <= 5.6) {
												if (x[0] <= 11.3) {
													if (x[0] <= 8.0) {
														if (x[1] <= 5.5) {
															return 9.0f;
														}
														else {
															return 1.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[1] <= 5.4) {
														return 9.0f;
													}
													else {
														if (x[0] <= 11.4) {
															if (x[1] <= 5.5) {
																return 9.0f;
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
												if (x[0] <= 11.0) {
													if (x[0] <= 8.8) {
														if (x[1] <= 5.9) {
															if (x[0] <= 8.4) {
																if (x[1] <= 5.7) {
																	if (x[0] <= 8.2) {
																		return 1.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 1.0f;
																}

															}
															else {
																if (x[1] <= 5.8) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 8.6) {
																		return 1.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															return 1.0f;
														}

													}
													else {
														if (x[1] <= 6.0) {
															if (x[0] <= 10.8) {
																return 9.0f;
															}
															else {
																if (x[1] <= 5.8) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 10.9) {
																		if (x[1] <= 5.9) {
																			return 9.0f;
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
															if (x[0] <= 10.6) {
																if (x[0] <= 9.2) {
																	if (x[0] <= 9.0) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 6.1) {
																			return 9.0f;
																		}
																		else {
																			return 1.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 10.5) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 6.1) {
																			return 9.0f;
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
												else {
													if (x[1] <= 5.7) {
														if (x[0] <= 11.1) {
															return 9.0f;
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
										if (x[1] <= 6.5) {
											if (x[0] <= 9.4) {
												return 1.0f;
											}
											else {
												if (x[0] <= 10.4) {
													if (x[1] <= 6.3) {
														return 9.0f;
													}
													else {
														if (x[0] <= 9.6) {
															return 1.0f;
														}
														else {
															if (x[1] <= 6.4) {
																if (x[0] <= 10.3) {
																	return 9.0f;
																}
																else {
																	return 1.0f;
																}

															}
															else {
																if (x[0] <= 10.1) {
																	if (x[0] <= 9.8) {
																		return 1.0f;
																	}
																	else {
																		return 9.0f;
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
													return 1.0f;
												}

											}

										}
										else {
											if (x[0] <= 6.6) {
												if (x[1] <= 7.0) {
													return 1.0f;
												}
												else {
													if (x[0] <= 6.5) {
														return 0.0f;
													}
													else {
														if (x[1] <= 7.2) {
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
									if (x[0] <= 12.6) {
										if (x[1] <= 5.9) {
											if (x[1] <= 5.3) {
												if (x[0] <= 11.9) {
													if (x[1] <= 5.2) {
														if (x[0] <= 11.8) {
															return 9.0f;
														}
														else {
															if (x[1] <= 5.1) {
																return 9.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														if (x[0] <= 11.6) {
															return 9.0f;
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
												if (x[1] <= 5.6) {
													return 1.0f;
												}
												else {
													if (x[0] <= 12.1) {
														if (x[0] <= 11.9) {
															return 1.0f;
														}
														else {
															if (x[1] <= 5.7) {
																if (x[0] <= 12.0) {
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
														return 1.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 6.5) {
												if (x[0] <= 11.8) {
													return 1.0f;
												}
												else {
													if (x[0] <= 12.3) {
														if (x[1] <= 6.0) {
															if (x[0] <= 12.2) {
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
														if (x[1] <= 6.2) {
															return 1.0f;
														}
														else {
															if (x[0] <= 12.4) {
																return 0.0f;
															}
															else {
																if (x[1] <= 6.4) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 12.5) {
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
												if (x[0] <= 11.6) {
													if (x[1] <= 7.1) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 12.5) {
														return 0.0f;
													}
													else {
														if (x[1] <= 6.7) {
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
									else {
										if (x[0] <= 16.8) {
											if (x[1] <= 7.0) {
												if (x[0] <= 12.7) {
													if (x[1] <= 6.9) {
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
												if (x[0] <= 12.8) {
													return 0.0f;
												}
												else {
													if (x[0] <= 15.9) {
														if (x[0] <= 12.9) {
															if (x[1] <= 7.2) {
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
														if (x[1] <= 7.2) {
															if (x[0] <= 16.7) {
																return 1.0f;
															}
															else {
																if (x[1] <= 7.1) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[0] <= 16.0) {
																if (x[1] <= 7.3) {
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
											if (x[1] <= 6.3) {
												if (x[1] <= 5.9) {
													return 1.0f;
												}
												else {
													if (x[0] <= 17.3) {
														return 1.0f;
													}
													else {
														if (x[0] <= 17.4) {
															if (x[1] <= 6.1) {
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
												if (x[0] <= 17.2) {
													if (x[1] <= 6.7) {
														if (x[0] <= 17.1) {
															return 1.0f;
														}
														else {
															if (x[1] <= 6.5) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 16.9) {
															if (x[1] <= 6.9) {
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

							}

						}
						else {
							if (x[1] <= 5.7) {
								if (x[0] <= 17.9) {
									if (x[1] <= 5.3) {
										return 1.0f;
									}
									else {
										if (x[0] <= 17.7) {
											return 1.0f;
										}
										else {
											if (x[0] <= 17.8) {
												if (x[1] <= 5.5) {
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
									if (x[0] <= 19.8) {
										if (x[0] <= 18.0) {
											if (x[1] <= 5.1) {
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
									else {
										if (x[1] <= 5.4) {
											if (x[0] <= 19.9) {
												if (x[1] <= 5.2) {
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
											if (x[0] <= 20.0) {
												return 0.0f;
											}
											else {
												if (x[1] <= 5.5) {
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
							else {
								return 0.0f;
							}

						}

					}
					else {
						if (x[0] <= 11.9) {
							if (x[0] <= 7.8) {
								if (x[0] <= 7.7) {
									return 0.0f;
								}
								else {
									if (x[1] <= 5.1) {
										return 9.0f;
									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.1) {
									if (x[0] <= 11.1) {
										if (x[1] <= 5.7) {
											if (x[0] <= 8.2) {
												if (x[1] <= 5.6) {
													if (x[0] <= 8.0) {
														if (x[1] <= 5.3) {
															return 9.0f;
														}
														else {
															if (x[0] <= 7.9) {
																return 0.0f;
															}
															else {
																if (x[1] <= 5.5) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											if (x[0] <= 8.6) {
												if (x[0] <= 8.4) {
													return 0.0f;
												}
												else {
													if (x[1] <= 5.8) {
														return 9.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 10.8) {
													if (x[0] <= 9.0) {
														if (x[1] <= 5.9) {
															return 9.0f;
														}
														else {
															if (x[0] <= 8.8) {
																return 0.0f;
															}
															else {
																if (x[1] <= 6.0) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 10.6) {
															return 9.0f;
														}
														else {
															if (x[1] <= 6.0) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 5.9) {
														if (x[0] <= 10.9) {
															return 9.0f;
														}
														else {
															if (x[0] <= 11.0) {
																if (x[1] <= 5.8) {
																	return 9.0f;
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
										if (x[1] <= 5.6) {
											if (x[0] <= 11.4) {
												if (x[1] <= 5.5) {
													return 9.0f;
												}
												else {
													if (x[0] <= 11.3) {
														return 9.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 5.2) {
													if (x[0] <= 11.8) {
														return 9.0f;
													}
													else {
														if (x[1] <= 5.1) {
															return 9.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 11.6) {
														if (x[1] <= 5.4) {
															if (x[0] <= 11.5) {
																return 9.0f;
															}
															else {
																if (x[1] <= 5.3) {
																	return 9.0f;
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

								}
								else {
									if (x[1] <= 6.5) {
										if (x[0] <= 9.2) {
											return 0.0f;
										}
										else {
											if (x[0] <= 10.5) {
												if (x[1] <= 6.3) {
													if (x[0] <= 9.4) {
														if (x[1] <= 6.2) {
															return 9.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 10.4) {
															return 9.0f;
														}
														else {
															if (x[1] <= 6.2) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 9.6) {
														return 0.0f;
													}
													else {
														if (x[0] <= 10.3) {
															if (x[1] <= 6.4) {
																return 9.0f;
															}
															else {
																if (x[0] <= 9.8) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 10.1) {
																		return 9.0f;
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

				}

			}

		}
		else {
			if (x[3] <= 0.1) {
				if (x[1] <= 19.6) {
					if (x[1] <= 11.7) {
						if (x[2] <= 0.75) {
							return 0.0f;
						}
						else {
							if (x[0] <= 7.0) {
								if (x[1] <= 8.2) {
									if (x[0] <= 2.6) {
										if (x[0] <= 1.4) {
											return 0.0f;
										}
										else {
											if (x[1] <= 7.7) {
												if (x[0] <= 2.4) {
													return 1.0f;
												}
												else {
													if (x[1] <= 7.6) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 1.6) {
													return 0.0f;
												}
												else {
													if (x[0] <= 2.2) {
														if (x[0] <= 1.8) {
															if (x[1] <= 7.9) {
																return 1.0f;
															}
															else {
																if (x[1] <= 8.0) {
																	if (x[0] <= 1.7) {
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
															return 1.0f;
														}

													}
													else {
														if (x[1] <= 7.9) {
															if (x[0] <= 2.4) {
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
										if (x[0] <= 6.7) {
											return 0.0f;
										}
										else {
											if (x[1] <= 7.9) {
												if (x[0] <= 6.8) {
													if (x[1] <= 7.5) {
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

									}

								}
								else {
									if (x[1] <= 8.3) {
										if (x[0] <= 2.0) {
											if (x[0] <= 1.9) {
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
							else {
								if (x[0] <= 11.1) {
									if (x[1] <= 10.0) {
										if (x[0] <= 7.8) {
											if (x[1] <= 8.8) {
												if (x[0] <= 7.2) {
													if (x[1] <= 8.3) {
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
												if (x[0] <= 7.4) {
													return 0.0f;
												}
												else {
													if (x[1] <= 9.3) {
														if (x[1] <= 9.2) {
															return 1.0f;
														}
														else {
															if (x[0] <= 7.5) {
																return 0.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														if (x[1] <= 9.6) {
															if (x[0] <= 7.7) {
																if (x[0] <= 7.6) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 9.4) {
																		return 1.0f;
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
														else {
															return 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 11.0) {
												if (x[0] <= 7.9) {
													if (x[1] <= 9.8) {
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
												if (x[1] <= 9.5) {
													return 1.0f;
												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 8.5) {
											if (x[1] <= 10.5) {
												if (x[0] <= 8.0) {
													return 0.0f;
												}
												else {
													if (x[0] <= 8.3) {
														if (x[1] <= 10.3) {
															if (x[0] <= 8.2) {
																if (x[1] <= 10.1) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 8.1) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 10.2) {
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
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 10.4) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.4) {
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
											if (x[0] <= 10.8) {
												if (x[1] <= 10.9) {
													if (x[0] <= 8.8) {
														if (x[1] <= 10.6) {
															return 1.0f;
														}
														else {
															if (x[0] <= 8.6) {
																return 0.0f;
															}
															else {
																if (x[1] <= 10.7) {
																	return 1.0f;
																}
																else {
																	if (x[0] <= 8.7) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 10.8) {
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
													else {
														return 1.0f;
													}

												}
												else {
													if (x[0] <= 9.2) {
														if (x[1] <= 11.2) {
															if (x[0] <= 8.9) {
																return 0.0f;
															}
															else {
																if (x[0] <= 9.1) {
																	if (x[1] <= 11.0) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 9.0) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 11.1) {
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
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 11.3) {
															return 1.0f;
														}
														else {
															if (x[0] <= 10.6) {
																if (x[0] <= 9.5) {
																	if (x[1] <= 11.5) {
																		if (x[0] <= 9.3) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 9.4) {
																				if (x[1] <= 11.4) {
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
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 11.6) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 9.6) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 10.5) {
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

											}
											else {
												if (x[1] <= 10.7) {
													if (x[0] <= 10.9) {
														return 1.0f;
													}
													else {
														if (x[1] <= 10.1) {
															if (x[0] <= 11.0) {
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
									if (x[1] <= 9.4) {
										if (x[0] <= 15.8) {
											if (x[0] <= 13.3) {
												if (x[0] <= 11.4) {
													if (x[1] <= 8.9) {
														if (x[0] <= 11.3) {
															return 1.0f;
														}
														else {
															if (x[1] <= 8.3) {
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
													if (x[1] <= 8.0) {
														if (x[0] <= 13.0) {
															if (x[0] <= 11.5) {
																if (x[1] <= 7.7) {
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
														else {
															if (x[1] <= 7.7) {
																return 1.0f;
															}
															else {
																if (x[0] <= 13.1) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 7.9) {
																		return 1.0f;
																	}
																	else {
																		if (x[0] <= 13.2) {
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
														return 0.0f;
													}

												}

											}
											else {
												if (x[0] <= 15.2) {
													if (x[0] <= 13.7) {
														if (x[1] <= 8.8) {
															if (x[1] <= 8.3) {
																return 1.0f;
															}
															else {
																if (x[0] <= 13.5) {
																	if (x[1] <= 8.4) {
																		if (x[0] <= 13.4) {
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

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 8.9) {
															return 1.0f;
														}
														else {
															if (x[0] <= 15.0) {
																if (x[0] <= 13.9) {
																	if (x[1] <= 9.1) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 9.2) {
																			if (x[0] <= 13.8) {
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
																	if (x[0] <= 14.9) {
																		return 1.0f;
																	}
																	else {
																		if (x[1] <= 9.3) {
																			return 1.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 9.1) {
																	if (x[0] <= 15.1) {
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
													if (x[1] <= 8.3) {
														if (x[0] <= 15.5) {
															return 1.0f;
														}
														else {
															if (x[1] <= 7.9) {
																if (x[0] <= 15.7) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 7.7) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 15.6) {
																	if (x[1] <= 8.1) {
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
														if (x[0] <= 15.4) {
															if (x[1] <= 8.7) {
																if (x[0] <= 15.3) {
																	return 1.0f;
																}
																else {
																	if (x[1] <= 8.5) {
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
											if (x[0] <= 15.9) {
												if (x[1] <= 7.5) {
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
						if (x[1] <= 12.0) {
							if (x[2] <= 0.75) {
								return 0.0f;
							}
							else {
								if (x[0] <= 9.7) {
									return 0.0f;
								}
								else {
									if (x[0] <= 10.4) {
										if (x[1] <= 11.8) {
											return 1.0f;
										}
										else {
											if (x[0] <= 9.8) {
												return 0.0f;
											}
											else {
												if (x[0] <= 10.3) {
													if (x[1] <= 11.9) {
														return 1.0f;
													}
													else {
														if (x[0] <= 10.1) {
															if (x[0] <= 9.9) {
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
					if (x[2] <= 0.75) {
						if (x[0] <= 16.9) {
							if (x[0] <= 7.1) {
								if (x[0] <= 3.4) {
									if (x[0] <= 0.9) {
										if (x[1] <= 20.6) {
											if (x[0] <= 0.6) {
												if (x[1] <= 20.0) {
													if (x[0] <= 0.4) {
														if (x[1] <= 19.7) {
															if (x[0] <= 0.2) {
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
											else {
												if (x[1] <= 20.3) {
													return 0.0f;
												}
												else {
													if (x[0] <= 0.7) {
														return 0.0f;
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
										if (x[1] <= 20.9) {
											if (x[0] <= 3.1) {
												return 0.0f;
											}
											else {
												if (x[1] <= 20.5) {
													return 0.0f;
												}
												else {
													if (x[0] <= 3.2) {
														if (x[1] <= 20.8) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 20.6) {
															if (x[0] <= 3.3) {
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
											if (x[0] <= 2.8) {
												if (x[0] <= 1.2) {
													if (x[1] <= 21.2) {
														if (x[0] <= 1.1) {
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
													if (x[1] <= 21.5) {
														if (x[0] <= 2.7) {
															return 0.0f;
														}
														else {
															if (x[1] <= 21.4) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 1.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 2.4) {
																if (x[0] <= 1.6) {
																	if (x[1] <= 21.8) {
																		return 0.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[0] <= 2.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 22.0) {
																			return 0.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[0] <= 2.6) {
																	if (x[1] <= 21.8) {
																		if (x[1] <= 21.7) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 2.5) {
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

														}

													}

												}

											}
											else {
												if (x[1] <= 21.2) {
													if (x[0] <= 3.0) {
														if (x[1] <= 21.1) {
															return 0.0f;
														}
														else {
															if (x[0] <= 2.9) {
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

										}

									}

								}
								else {
									if (x[0] <= 6.4) {
										if (x[0] <= 3.8) {
											if (x[1] <= 20.3) {
												if (x[1] <= 19.9) {
													return 0.0f;
												}
												else {
													if (x[0] <= 3.6) {
														if (x[1] <= 20.2) {
															return 0.0f;
														}
														else {
															if (x[0] <= 3.5) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 20.0) {
															if (x[0] <= 3.7) {
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
											else {
												return 0.0f;
											}

										}
										else {
											if (x[1] <= 19.7) {
												if (x[0] <= 6.2) {
													if (x[0] <= 3.9) {
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
										if (x[1] <= 20.9) {
											if (x[1] <= 20.0) {
												return 0.0f;
											}
											else {
												if (x[0] <= 6.8) {
													if (x[1] <= 20.3) {
														if (x[0] <= 6.6) {
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
													if (x[0] <= 6.9) {
														if (x[1] <= 20.6) {
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
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (x[0] <= 11.1) {
									if (x[0] <= 7.6) {
										if (x[1] <= 21.2) {
											return 0.0f;
										}
										else {
											if (x[0] <= 7.3) {
												return 0.0f;
											}
											else {
												if (x[1] <= 21.8) {
													if (x[0] <= 7.4) {
														if (x[1] <= 21.5) {
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
									else {
										if (x[0] <= 11.0) {
											return 0.0f;
										}
										else {
											if (x[1] <= 21.9) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 13.2) {
										if (x[0] <= 11.7) {
											if (x[1] <= 20.9) {
												if (x[0] <= 11.5) {
													return 0.0f;
												}
												else {
													if (x[1] <= 20.4) {
														return 0.0f;
													}
													else {
														if (x[1] <= 20.6) {
															if (x[0] <= 11.6) {
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
											else {
												if (x[0] <= 11.4) {
													if (x[1] <= 21.6) {
														if (x[0] <= 11.2) {
															return 0.0f;
														}
														else {
															if (x[1] <= 21.1) {
																return 0.0f;
															}
															else {
																if (x[0] <= 11.3) {
																	if (x[1] <= 21.4) {
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
											if (x[1] <= 20.6) {
												if (x[0] <= 13.0) {
													if (x[0] <= 11.9) {
														if (x[1] <= 20.1) {
															if (x[1] <= 19.9) {
																return 0.0f;
															}
															else {
																if (x[0] <= 11.8) {
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
														if (x[0] <= 12.9) {
															return 0.0f;
														}
														else {
															if (x[1] <= 19.8) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 20.2) {
														return 0.0f;
													}
													else {
														if (x[0] <= 13.1) {
															return 0.0f;
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
										if (x[0] <= 15.5) {
											if (x[1] <= 21.4) {
												if (x[0] <= 13.3) {
													if (x[1] <= 21.0) {
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
												if (x[0] <= 13.4) {
													return 0.0f;
												}
												else {
													if (x[0] <= 15.1) {
														if (x[0] <= 13.5) {
															if (x[1] <= 21.8) {
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
														if (x[1] <= 21.8) {
															if (x[0] <= 15.3) {
																return 0.0f;
															}
															else {
																if (x[1] <= 21.6) {
																	if (x[0] <= 15.4) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 21.5) {
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
															if (x[0] <= 15.2) {
																if (x[1] <= 21.9) {
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
										else {
											if (x[1] <= 20.5) {
												if (x[1] <= 20.2) {
													return 0.0f;
												}
												else {
													if (x[0] <= 16.3) {
														return 0.0f;
													}
													else {
														if (x[0] <= 16.7) {
															if (x[1] <= 20.3) {
																return 0.0f;
															}
															else {
																if (x[0] <= 16.5) {
																	if (x[1] <= 20.4) {
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

											}
											else {
												if (x[0] <= 15.9) {
													if (x[1] <= 21.2) {
														if (x[1] <= 20.9) {
															return 0.0f;
														}
														else {
															if (x[0] <= 15.7) {
																return 0.0f;
															}
															else {
																if (x[1] <= 21.0) {
																	if (x[0] <= 15.8) {
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
													else {
														if (x[1] <= 21.3) {
															if (x[0] <= 15.6) {
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
													if (x[1] <= 20.6) {
														if (x[0] <= 16.1) {
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
						else {
							if (x[1] <= 20.1) {
								if (x[0] <= 17.9) {
									if (x[0] <= 17.3) {
										if (x[1] <= 20.0) {
											return 0.0f;
										}
										else {
											if (x[0] <= 17.1) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 19.9) {
											if (x[0] <= 17.5) {
												return 0.0f;
											}
											else {
												if (x[1] <= 19.7) {
													return 0.0f;
												}
												else {
													if (x[0] <= 17.7) {
														if (x[1] <= 19.8) {
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
			else {
				if (x[3] <= 1.2) {
					if (x[1] <= 9.1) {
						if (x[2] <= 0.75) {
							if (x[0] <= 11.5) {
								if (x[0] <= 7.9) {
									if (x[0] <= 7.7) {
										return 0.0f;
									}
									else {
										if (x[3] <= 1.0) {
											return 0.0f;
										}
										else {
											if (x[1] <= 7.8) {
												if (x[0] <= 7.8) {
													if (x[1] <= 7.5) {
														return 9.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[3] <= 0.8) {
										if (x[1] <= 8.0) {
											if (x[3] <= 0.4) {
												if (x[1] <= 7.5) {
													if (x[0] <= 9.9) {
														return 0.0f;
													}
													else {
														if (x[0] <= 10.1) {
															if (x[3] <= 0.2) {
																return 0.0f;
															}
															else {
																return 9.0f;
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
												if (x[0] <= 9.2) {
													if (x[0] <= 8.6) {
														return 0.0f;
													}
													else {
														if (x[1] <= 7.7) {
															if (x[3] <= 0.6) {
																return 0.0f;
															}
															else {
																if (x[0] <= 9.0) {
																	if (x[1] <= 7.5) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 8.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 7.6) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 10.8) {
														if (x[3] <= 0.6) {
															if (x[0] <= 9.5) {
																if (x[1] <= 7.5) {
																	if (x[0] <= 9.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 7.7) {
																	if (x[0] <= 10.5) {
																		if (x[0] <= 9.6) {
																			if (x[1] <= 7.6) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		if (x[1] <= 7.5) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 10.6) {
																				if (x[1] <= 7.6) {
																					return 9.0f;
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
																	if (x[0] <= 10.4) {
																		if (x[0] <= 9.7) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 7.8) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 9.8) {
																					return 0.0f;
																				}
																				else {
																					if (x[0] <= 10.3) {
																						if (x[1] <= 7.9) {
																							return 9.0f;
																						}
																						else {
																							if (x[0] <= 10.1) {
																								if (x[0] <= 9.9) {
																									return 0.0f;
																								}
																								else {
																									return 9.0f;
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
															if (x[0] <= 9.4) {
																if (x[1] <= 7.8) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 9.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 7.9) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[3] <= 0.6) {
															return 0.0f;
														}
														else {
															if (x[1] <= 7.6) {
																if (x[0] <= 11.3) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 11.4) {
																		if (x[1] <= 7.5) {
																			return 9.0f;
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
																if (x[0] <= 11.1) {
																	if (x[1] <= 7.8) {
																		if (x[0] <= 11.0) {
																			return 9.0f;
																		}
																		else {
																			if (x[1] <= 7.7) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		if (x[0] <= 10.9) {
																			if (x[1] <= 7.9) {
																				return 9.0f;
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

											}

										}
										else {
											if (x[3] <= 0.6) {
												return 0.0f;
											}
											else {
												if (x[1] <= 8.5) {
													if (x[0] <= 9.5) {
														return 0.0f;
													}
													else {
														if (x[0] <= 10.6) {
															if (x[1] <= 8.2) {
																if (x[1] <= 8.1) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 9.6) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 10.5) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[0] <= 9.7) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 10.4) {
																		if (x[1] <= 8.3) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 9.8) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 10.3) {
																					if (x[1] <= 8.4) {
																						return 9.0f;
																					}
																					else {
																						if (x[0] <= 10.1) {
																							if (x[0] <= 9.9) {
																								return 0.0f;
																							}
																							else {
																								return 9.0f;
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
										if (x[1] <= 8.2) {
											if (x[0] <= 8.8) {
												if (x[1] <= 7.8) {
													if (x[3] <= 1.0) {
														if (x[0] <= 8.4) {
															if (x[1] <= 7.6) {
																if (x[0] <= 8.0) {
																	if (x[1] <= 7.5) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[0] <= 8.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 7.7) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[3] <= 1.0) {
														if (x[0] <= 8.6) {
															return 0.0f;
														}
														else {
															if (x[1] <= 7.9) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 8.4) {
															if (x[1] <= 8.0) {
																if (x[0] <= 8.0) {
																	if (x[1] <= 7.9) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[0] <= 8.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 8.1) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 11.4) {
													if (x[1] <= 8.0) {
														return 9.0f;
													}
													else {
														if (x[3] <= 1.0) {
															if (x[0] <= 9.0) {
																return 0.0f;
															}
															else {
																if (x[0] <= 11.1) {
																	if (x[0] <= 9.1) {
																		if (x[1] <= 8.1) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[1] <= 8.1) {
																		if (x[0] <= 11.3) {
																			return 9.0f;
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
															return 9.0f;
														}

													}

												}
												else {
													if (x[1] <= 7.7) {
														return 9.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 9.1) {
												if (x[0] <= 8.6) {
													return 0.0f;
												}
												else {
													if (x[1] <= 8.6) {
														if (x[3] <= 1.0) {
															return 0.0f;
														}
														else {
															if (x[1] <= 8.3) {
																return 9.0f;
															}
															else {
																if (x[0] <= 8.8) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 9.0) {
																		if (x[1] <= 8.4) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 8.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 8.5) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 9.0f;
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
												if (x[0] <= 10.9) {
													if (x[3] <= 1.0) {
														if (x[1] <= 8.6) {
															if (x[0] <= 9.4) {
																if (x[1] <= 8.4) {
																	if (x[0] <= 9.2) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 9.3) {
																			if (x[1] <= 8.3) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 10.6) {
																	if (x[0] <= 9.5) {
																		if (x[1] <= 8.5) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[1] <= 8.5) {
																		if (x[0] <= 10.8) {
																			return 9.0f;
																		}
																		else {
																			if (x[1] <= 8.4) {
																				return 9.0f;
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
															if (x[0] <= 9.6) {
																return 0.0f;
															}
															else {
																if (x[0] <= 10.5) {
																	if (x[1] <= 8.9) {
																		if (x[1] <= 8.7) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 9.7) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 10.3) {
																					if (x[0] <= 9.8) {
																						if (x[1] <= 8.8) {
																							return 9.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					if (x[0] <= 10.4) {
																						if (x[1] <= 8.8) {
																							return 9.0f;
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
																		if (x[1] <= 9.0) {
																			if (x[0] <= 10.1) {
																				if (x[0] <= 9.9) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
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
														if (x[1] <= 8.7) {
															return 9.0f;
														}
														else {
															if (x[0] <= 9.4) {
																if (x[1] <= 8.9) {
																	if (x[0] <= 9.2) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 9.3) {
																			if (x[1] <= 8.8) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[0] <= 10.6) {
																	if (x[0] <= 9.5) {
																		if (x[1] <= 9.0) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[1] <= 9.0) {
																		if (x[0] <= 10.8) {
																			return 9.0f;
																		}
																		else {
																			if (x[1] <= 8.9) {
																				return 9.0f;
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
													if (x[3] <= 1.0) {
														if (x[1] <= 8.3) {
															if (x[0] <= 11.0) {
																return 9.0f;
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
														if (x[1] <= 8.7) {
															if (x[0] <= 11.3) {
																if (x[1] <= 8.6) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 11.1) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= 8.3) {
																	if (x[0] <= 11.4) {
																		return 9.0f;
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
															if (x[0] <= 11.0) {
																if (x[1] <= 8.8) {
																	return 9.0f;
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
								return 0.0f;
							}

						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[1] <= 9.5) {
							if (x[3] <= 1.0) {
								return 0.0f;
							}
							else {
								if (x[2] <= 0.75) {
									if (x[0] <= 9.6) {
										return 0.0f;
									}
									else {
										if (x[0] <= 10.5) {
											if (x[1] <= 9.3) {
												if (x[1] <= 9.2) {
													return 9.0f;
												}
												else {
													if (x[0] <= 9.7) {
														return 0.0f;
													}
													else {
														if (x[0] <= 10.4) {
															return 9.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 9.8) {
													return 0.0f;
												}
												else {
													if (x[0] <= 10.3) {
														if (x[1] <= 9.4) {
															return 9.0f;
														}
														else {
															if (x[0] <= 10.1) {
																if (x[0] <= 9.9) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
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
					if (x[1] <= 20.6) {
						if (x[1] <= 10.2) {
							if (x[2] <= 0.75) {
								if (x[0] <= 7.2) {
									if (x[1] <= 8.0) {
										if (x[3] <= 1.6) {
											return 0.0f;
										}
										else {
											if (x[0] <= 2.6) {
												if (x[0] <= 1.6) {
													if (x[0] <= 1.4) {
														return 0.0f;
													}
													else {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[1] <= 7.7) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 7.7) {
														if (x[3] <= 1.8) {
															if (x[0] <= 1.8) {
																return 0.0f;
															}
															else {
																if (x[1] <= 7.6) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 2.4) {
																		if (x[0] <= 1.9) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[0] <= 2.4) {
																return 9.0f;
															}
															else {
																if (x[1] <= 7.6) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[3] <= 1.8) {
															return 0.0f;
														}
														else {
															if (x[0] <= 2.4) {
																if (x[0] <= 1.8) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 7.9) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 1.7) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[1] <= 7.9) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 2.2) {
																			if (x[0] <= 1.9) {
																				if (x[3] <= 2.0) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
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

											}
											else {
												if (x[0] <= 6.8) {
													if (x[0] <= 6.7) {
														return 0.0f;
													}
													else {
														if (x[1] <= 7.5) {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[3] <= 1.8) {
														if (x[1] <= 7.5) {
															if (x[0] <= 7.1) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 7.0) {
															if (x[3] <= 2.0) {
																if (x[1] <= 7.5) {
																	if (x[0] <= 6.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 7.9) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 7.9) {
																return 9.0f;
															}
															else {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}

											}

										}

									}
									else {
										if (x[3] <= 2.0) {
											return 0.0f;
										}
										else {
											if (x[1] <= 8.3) {
												if (x[0] <= 7.0) {
													if (x[0] <= 2.2) {
														if (x[0] <= 1.8) {
															return 0.0f;
														}
														else {
															if (x[1] <= 8.2) {
																return 9.0f;
															}
															else {
																if (x[0] <= 2.0) {
																	if (x[0] <= 1.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
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
													return 9.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 11.3) {
										if (x[1] <= 8.9) {
											if (x[0] <= 7.8) {
												if (x[3] <= 1.6) {
													if (x[1] <= 7.9) {
														if (x[0] <= 7.6) {
															if (x[0] <= 7.4) {
																if (x[1] <= 7.5) {
																	if (x[0] <= 7.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[3] <= 1.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[3] <= 1.4) {
																	if (x[1] <= 7.5) {
																		if (x[0] <= 7.5) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[0] <= 7.6) {
															return 0.0f;
														}
														else {
															if (x[1] <= 8.3) {
																if (x[3] <= 1.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 8.3) {
														if (x[0] <= 7.4) {
															if (x[3] <= 1.8) {
																if (x[1] <= 7.9) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[0] <= 7.6) {
															if (x[3] <= 1.8) {
																return 0.0f;
															}
															else {
																if (x[0] <= 7.4) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 8.8) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= 8.8) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[1] <= 8.7) {
																return 9.0f;
															}
															else {
																if (x[3] <= 1.8) {
																	if (x[0] <= 7.7) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 8.8) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[0] <= 8.8) {
													if (x[3] <= 1.4) {
														if (x[1] <= 8.4) {
															if (x[0] <= 8.0) {
																if (x[1] <= 8.2) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 7.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 8.3) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 8.2) {
																return 0.0f;
															}
															else {
																if (x[1] <= 8.6) {
																	if (x[0] <= 8.4) {
																		if (x[1] <= 8.5) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 8.6) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 8.7) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 8.7) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 8.8) {
																					return 9.0f;
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
														if (x[1] <= 8.6) {
															return 9.0f;
														}
														else {
															if (x[3] <= 1.6) {
																if (x[0] <= 8.2) {
																	if (x[1] <= 8.8) {
																		if (x[0] <= 8.0) {
																			if (x[0] <= 7.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 8.7) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											if (x[0] <= 8.5) {
												if (x[3] <= 1.6) {
													if (x[0] <= 8.4) {
														return 0.0f;
													}
													else {
														if (x[1] <= 9.0) {
															if (x[3] <= 1.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 7.8) {
														if (x[1] <= 9.3) {
															if (x[3] <= 1.8) {
																return 0.0f;
															}
															else {
																if (x[0] <= 7.4) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 2.0) {
																		if (x[0] <= 7.6) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 9.1) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 7.7) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 9.2) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[0] <= 7.5) {
																			if (x[1] <= 9.2) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																if (x[0] <= 7.6) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 9.6) {
																		if (x[0] <= 7.7) {
																			if (x[1] <= 9.4) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
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
														if (x[1] <= 9.5) {
															if (x[3] <= 1.8) {
																if (x[1] <= 9.2) {
																	if (x[0] <= 8.0) {
																		if (x[1] <= 9.0) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 7.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 9.1) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 8.2) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 8.4) {
																			if (x[1] <= 9.3) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 8.3) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 9.4) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[0] <= 7.9) {
																	if (x[1] <= 9.4) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[3] <= 1.8) {
																return 0.0f;
															}
															else {
																if (x[3] <= 2.0) {
																	if (x[0] <= 8.1) {
																		if (x[1] <= 9.6) {
																			if (x[0] <= 8.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[1] <= 9.8) {
																			if (x[0] <= 8.2) {
																				if (x[1] <= 9.7) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			if (x[0] <= 8.3) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 10.0) {
																					if (x[0] <= 8.4) {
																						if (x[1] <= 9.9) {
																							return 9.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 9.0f;
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
																	if (x[0] <= 8.1) {
																		if (x[1] <= 9.8) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 7.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 10.0) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 8.0) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 10.1) {
																							return 9.0f;
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
																		return 9.0f;
																	}

																}

															}

														}

													}

												}

											}
											else {
												if (x[0] <= 11.1) {
													if (x[3] <= 1.6) {
														if (x[1] <= 9.5) {
															if (x[0] <= 9.2) {
																if (x[3] <= 1.4) {
																	if (x[0] <= 8.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 9.2) {
																			if (x[0] <= 9.1) {
																				if (x[1] <= 9.0) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 9.0) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 9.1) {
																							return 9.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 8.9) {
																		if (x[1] <= 9.2) {
																			if (x[0] <= 8.6) {
																				if (x[1] <= 9.1) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			if (x[0] <= 8.7) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 9.3) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 8.8) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 9.4) {
																							return 9.0f;
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
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[1] <= 9.2) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 10.8) {
																		if (x[0] <= 9.4) {
																			if (x[3] <= 1.4) {
																				if (x[1] <= 9.3) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 9.3) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 9.4) {
																							return 9.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		if (x[3] <= 1.4) {
																			if (x[0] <= 11.0) {
																				if (x[1] <= 9.3) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 10.9) {
																						if (x[1] <= 9.4) {
																							return 9.0f;
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
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[0] <= 9.3) {
																if (x[0] <= 9.0) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 9.8) {
																		if (x[3] <= 1.4) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 9.2) {
																				if (x[1] <= 9.6) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 9.1) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 9.7) {
																							return 9.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[3] <= 1.4) {
																	if (x[1] <= 9.9) {
																		if (x[0] <= 10.6) {
																			if (x[0] <= 9.6) {
																				if (x[1] <= 9.6) {
																					if (x[0] <= 9.5) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				if (x[0] <= 10.4) {
																					if (x[1] <= 9.7) {
																						return 9.0f;
																					}
																					else {
																						if (x[0] <= 9.8) {
																							if (x[0] <= 9.7) {
																								return 0.0f;
																							}
																							else {
																								if (x[1] <= 9.8) {
																									return 9.0f;
																								}
																								else {
																									return 0.0f;
																								}

																							}

																						}
																						else {
																							if (x[0] <= 10.3) {
																								return 9.0f;
																							}
																							else {
																								if (x[1] <= 9.8) {
																									return 9.0f;
																								}
																								else {
																									return 0.0f;
																								}

																							}

																						}

																					}

																				}
																				else {
																					if (x[1] <= 9.7) {
																						if (x[0] <= 10.5) {
																							return 9.0f;
																						}
																						else {
																							if (x[1] <= 9.6) {
																								return 9.0f;
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
																		if (x[1] <= 10.0) {
																			if (x[0] <= 10.1) {
																				if (x[0] <= 9.9) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
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
																	if (x[0] <= 10.8) {
																		if (x[1] <= 10.0) {
																			if (x[0] <= 9.4) {
																				if (x[1] <= 9.9) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			if (x[0] <= 9.5) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 10.5) {
																					if (x[0] <= 9.6) {
																						if (x[1] <= 10.1) {
																							return 9.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					if (x[0] <= 10.6) {
																						if (x[1] <= 10.1) {
																							return 9.0f;
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
																		if (x[1] <= 9.9) {
																			if (x[0] <= 11.0) {
																				if (x[1] <= 9.8) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 10.9) {
																						return 9.0f;
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
														if (x[0] <= 11.0) {
															if (x[0] <= 9.0) {
																if (x[1] <= 9.6) {
																	return 9.0f;
																}
																else {
																	if (x[3] <= 1.8) {
																		if (x[1] <= 9.9) {
																			if (x[0] <= 8.8) {
																				if (x[0] <= 8.6) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 9.7) {
																						return 9.0f;
																					}
																					else {
																						if (x[0] <= 8.7) {
																							return 0.0f;
																						}
																						else {
																							if (x[1] <= 9.8) {
																								return 9.0f;
																							}
																							else {
																								return 0.0f;
																							}

																						}

																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			if (x[0] <= 8.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 10.0) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[1] <= 10.1) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 8.6) {
																				if (x[3] <= 2.0) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[1] <= 10.1) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 10.9) {
																		if (x[0] <= 9.1) {
																			if (x[3] <= 1.8) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 9.5) {
																return 9.0f;
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
										if (x[0] <= 15.7) {
											if (x[1] <= 8.6) {
												if (x[0] <= 13.5) {
													if (x[0] <= 11.5) {
														if (x[1] <= 7.7) {
															return 9.0f;
														}
														else {
															if (x[0] <= 11.4) {
																if (x[1] <= 8.3) {
																	return 9.0f;
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
														if (x[0] <= 13.0) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.8) {
																if (x[0] <= 13.4) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 7.7) {
																		if (x[3] <= 1.6) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= 8.0) {
																	if (x[0] <= 13.2) {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 7.7) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 13.1) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 7.9) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[1] <= 7.7) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 13.3) {
																				if (x[3] <= 2.0) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				if (x[1] <= 7.9) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 13.4) {
																						if (x[3] <= 2.0) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 13.3) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 8.3) {
																				return 9.0f;
																			}
																			else {
																				if (x[1] <= 8.4) {
																					if (x[0] <= 13.4) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
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
													if (x[3] <= 1.6) {
														if (x[1] <= 8.2) {
															if (x[1] <= 7.8) {
																if (x[0] <= 15.5) {
																	if (x[0] <= 13.8) {
																		if (x[3] <= 1.4) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 13.6) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 7.7) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 13.7) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[0] <= 15.4) {
																			if (x[0] <= 13.9) {
																				if (x[1] <= 7.6) {
																					return 9.0f;
																				}
																				else {
																					if (x[3] <= 1.4) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}
																			else {
																				if (x[0] <= 15.3) {
																					return 9.0f;
																				}
																				else {
																					if (x[1] <= 7.7) {
																						return 9.0f;
																					}
																					else {
																						if (x[3] <= 1.4) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}

																				}

																			}

																		}
																		else {
																			if (x[1] <= 7.5) {
																				return 9.0f;
																			}
																			else {
																				if (x[3] <= 1.4) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 7.7) {
																						return 9.0f;
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
																	if (x[1] <= 7.5) {
																		if (x[0] <= 15.6) {
																			if (x[3] <= 1.4) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
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
																if (x[3] <= 1.4) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 15.3) {
																		if (x[0] <= 13.9) {
																			if (x[0] <= 13.7) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 8.0) {
																					if (x[0] <= 13.8) {
																						if (x[1] <= 7.9) {
																							return 9.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			if (x[0] <= 15.2) {
																				return 9.0f;
																			}
																			else {
																				if (x[1] <= 8.1) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[0] <= 15.4) {
																			if (x[1] <= 7.9) {
																				return 9.0f;
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
														if (x[0] <= 15.3) {
															if (x[0] <= 13.8) {
																if (x[1] <= 7.9) {
																	return 9.0f;
																}
																else {
																	if (x[3] <= 1.8) {
																		if (x[1] <= 8.3) {
																			if (x[0] <= 13.7) {
																				if (x[1] <= 8.0) {
																					if (x[0] <= 13.6) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[1] <= 8.3) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 13.7) {
																				if (x[3] <= 2.0) {
																					if (x[1] <= 8.4) {
																						if (x[0] <= 13.6) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}
																					else {
																						return 0.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[1] <= 8.3) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 15.2) {
																		if (x[0] <= 13.9) {
																			if (x[3] <= 1.8) {
																				if (x[1] <= 8.4) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			if (x[0] <= 15.1) {
																				return 9.0f;
																			}
																			else {
																				if (x[1] <= 8.5) {
																					return 9.0f;
																				}
																				else {
																					if (x[3] <= 1.8) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[3] <= 1.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 8.5) {
																				return 9.0f;
																			}
																			else {
																				if (x[3] <= 2.0) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}

																}

															}

														}
														else {
															if (x[1] <= 7.9) {
																if (x[0] <= 15.5) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 7.7) {
																		if (x[3] <= 1.8) {
																			if (x[0] <= 15.6) {
																				return 9.0f;
																			}
																			else {
																				if (x[1] <= 7.5) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		if (x[3] <= 1.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 15.6) {
																				return 9.0f;
																			}
																			else {
																				if (x[3] <= 2.0) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}

																}

															}
															else {
																if (x[0] <= 15.5) {
																	if (x[1] <= 8.3) {
																		if (x[3] <= 1.8) {
																			if (x[0] <= 15.4) {
																				if (x[1] <= 8.1) {
																					return 9.0f;
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
																			if (x[0] <= 15.4) {
																				return 9.0f;
																			}
																			else {
																				if (x[1] <= 8.1) {
																					return 9.0f;
																				}
																				else {
																					if (x[3] <= 2.0) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 15.4) {
																				if (x[1] <= 8.5) {
																					return 9.0f;
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
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 8.1) {
																			if (x[0] <= 15.6) {
																				return 9.0f;
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
												if (x[3] <= 1.8) {
													return 0.0f;
												}
												else {
													if (x[0] <= 13.7) {
														if (x[0] <= 13.5) {
															return 0.0f;
														}
														else {
															if (x[1] <= 8.8) {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 9.0) {
															if (x[0] <= 15.1) {
																if (x[0] <= 13.9) {
																	if (x[3] <= 2.0) {
																		if (x[1] <= 8.8) {
																			if (x[0] <= 13.8) {
																				if (x[1] <= 8.7) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 15.0) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 8.9) {
																			return 9.0f;
																		}
																		else {
																			if (x[3] <= 2.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[0] <= 15.2) {
																	if (x[1] <= 8.7) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 8.9) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[0] <= 15.3) {
																		if (x[1] <= 8.7) {
																			if (x[3] <= 2.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
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
															if (x[1] <= 9.4) {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 15.0) {
																		if (x[0] <= 13.9) {
																			if (x[1] <= 9.2) {
																				if (x[0] <= 13.8) {
																					if (x[1] <= 9.1) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[0] <= 14.9) {
																				return 9.0f;
																			}
																			else {
																				if (x[1] <= 9.3) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[0] <= 15.1) {
																			if (x[1] <= 9.1) {
																				return 9.0f;
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

											}

										}
										else {
											if (x[0] <= 15.9) {
												if (x[1] <= 7.7) {
													if (x[3] <= 1.8) {
														return 0.0f;
													}
													else {
														if (x[1] <= 7.5) {
															if (x[0] <= 15.8) {
																return 9.0f;
															}
															else {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																if (x[0] <= 15.8) {
																	return 9.0f;
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

							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[1] <= 19.6) {
								if (x[1] <= 11.5) {
									if (x[2] <= 0.75) {
										if (x[0] <= 10.9) {
											if (x[0] <= 8.7) {
												if (x[0] <= 8.2) {
													return 0.0f;
												}
												else {
													if (x[3] <= 2.0) {
														return 0.0f;
													}
													else {
														if (x[1] <= 10.7) {
															if (x[0] <= 8.5) {
																if (x[1] <= 10.5) {
																	if (x[0] <= 8.4) {
																		if (x[1] <= 10.3) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 8.3) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 10.4) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 10.6) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 8.6) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
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
												if (x[3] <= 1.8) {
													if (x[3] <= 1.6) {
														if (x[1] <= 10.5) {
															if (x[3] <= 1.4) {
																return 0.0f;
															}
															else {
																if (x[0] <= 9.7) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 10.4) {
																		if (x[1] <= 10.3) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 9.8) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 10.3) {
																					if (x[1] <= 10.4) {
																						return 9.0f;
																					}
																					else {
																						if (x[0] <= 10.1) {
																							if (x[0] <= 9.9) {
																								return 0.0f;
																							}
																							else {
																								return 9.0f;
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

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 10.9) {
															if (x[0] <= 9.4) {
																if (x[0] <= 9.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 10.4) {
																		if (x[0] <= 9.3) {
																			if (x[1] <= 10.3) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= 10.5) {
																	if (x[0] <= 10.8) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 10.4) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 10.5) {
																		if (x[0] <= 9.7) {
																			if (x[1] <= 10.7) {
																				if (x[0] <= 9.5) {
																					return 0.0f;
																				}
																				else {
																					if (x[0] <= 9.6) {
																						if (x[1] <= 10.6) {
																							return 9.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[1] <= 10.7) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 10.3) {
																					if (x[0] <= 9.8) {
																						if (x[1] <= 10.8) {
																							return 9.0f;
																						}
																						else {
																							return 0.0f;
																						}

																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					if (x[0] <= 10.4) {
																						if (x[1] <= 10.8) {
																							return 9.0f;
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
																		if (x[0] <= 10.6) {
																			if (x[1] <= 10.6) {
																				return 9.0f;
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
															if (x[1] <= 11.0) {
																if (x[0] <= 9.9) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 10.1) {
																		return 9.0f;
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
													if (x[1] <= 11.0) {
														if (x[0] <= 9.3) {
															if (x[3] <= 2.0) {
																if (x[1] <= 10.6) {
																	if (x[0] <= 9.0) {
																		if (x[1] <= 10.4) {
																			if (x[0] <= 8.8) {
																				if (x[1] <= 10.3) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			if (x[0] <= 8.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 10.5) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 9.1) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 10.8) {
																			if (x[0] <= 9.2) {
																				if (x[1] <= 10.7) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 10.8) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 8.9) {
																		if (x[0] <= 8.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 10.9) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[0] <= 10.8) {
																if (x[0] <= 9.4) {
																	if (x[1] <= 10.9) {
																		return 9.0f;
																	}
																	else {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[1] <= 10.7) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 9.4) {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																if (x[0] <= 9.0) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 11.2) {
																		if (x[0] <= 9.1) {
																			if (x[1] <= 11.1) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		if (x[0] <= 9.2) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 11.3) {
																				return 9.0f;
																			}
																			else {
																				if (x[0] <= 9.3) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 11.4) {
																						return 9.0f;
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
															if (x[0] <= 10.6) {
																if (x[3] <= 2.0) {
																	if (x[1] <= 11.3) {
																		if (x[0] <= 9.6) {
																			if (x[1] <= 11.1) {
																				if (x[0] <= 9.5) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[0] <= 10.4) {
																				if (x[0] <= 9.7) {
																					if (x[1] <= 11.2) {
																						return 9.0f;
																					}
																					else {
																						return 0.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				if (x[1] <= 11.1) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 10.5) {
																						if (x[1] <= 11.2) {
																							return 9.0f;
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
																		if (x[0] <= 9.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 10.3) {
																				if (x[1] <= 11.4) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 10.1) {
																						if (x[0] <= 9.9) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
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
																	return 9.0f;
																}

															}
															else {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 11.3) {
																		if (x[0] <= 10.8) {
																			return 9.0f;
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
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[1] <= 12.0) {
										if (x[3] <= 2.0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 0.75) {
												if (x[0] <= 9.5) {
													return 0.0f;
												}
												else {
													if (x[0] <= 10.6) {
														if (x[1] <= 11.7) {
															if (x[1] <= 11.6) {
																return 9.0f;
															}
															else {
																if (x[0] <= 9.6) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 10.5) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}

														}
														else {
															if (x[0] <= 9.7) {
																return 0.0f;
															}
															else {
																if (x[0] <= 10.4) {
																	if (x[1] <= 11.8) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 9.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 10.3) {
																				if (x[1] <= 11.9) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 10.1) {
																						if (x[0] <= 9.9) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
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
								if (x[3] <= 1.8) {
									return 0.0f;
								}
								else {
									if (x[2] <= 0.75) {
										return 0.0f;
									}
									else {
										if (x[1] <= 20.1) {
											if (x[3] <= 2.0) {
												return 0.0f;
											}
											else {
												if (x[0] <= 17.7) {
													if (x[0] <= 6.4) {
														if (x[0] <= 3.8) {
															if (x[0] <= 0.4) {
																if (x[1] <= 19.7) {
																	if (x[0] <= 0.2) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[0] <= 3.6) {
																	if (x[0] <= 0.6) {
																		if (x[1] <= 20.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 19.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 3.7) {
																			if (x[1] <= 20.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[1] <= 19.7) {
																if (x[0] <= 6.2) {
																	if (x[0] <= 3.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 11.8) {
															if (x[0] <= 6.6) {
																if (x[1] <= 20.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[0] <= 13.0) {
																if (x[0] <= 11.9) {
																	if (x[1] <= 19.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 12.9) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 19.8) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[0] <= 17.1) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 19.8) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 17.5) {
																			if (x[1] <= 19.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 17.3) {
																					if (x[1] <= 20.0) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}

													}

												}
												else {
													if (x[0] <= 17.9) {
														if (x[1] <= 19.7) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 17.7) {
												if (x[0] <= 6.6) {
													if (x[0] <= 3.8) {
														if (x[0] <= 0.6) {
															if (x[1] <= 20.2) {
																if (x[0] <= 0.4) {
																	return 9.0f;
																}
																else {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 3.4) {
																if (x[0] <= 0.7) {
																	if (x[1] <= 20.5) {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 20.3) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 3.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 20.5) {
																			return 0.0f;
																		}
																		else {
																			if (x[3] <= 2.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[3] <= 2.0) {
																	if (x[1] <= 20.4) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 3.6) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 3.7) {
																				if (x[1] <= 20.5) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[1] <= 20.3) {
																		if (x[0] <= 3.6) {
																			if (x[0] <= 3.5) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 20.2) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 20.2) {
															if (x[0] <= 6.4) {
																if (x[0] <= 3.9) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[0] <= 11.6) {
														if (x[0] <= 6.8) {
															if (x[1] <= 20.5) {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 20.3) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 13.1) {
															if (x[0] <= 11.9) {
																if (x[3] <= 2.0) {
																	if (x[0] <= 11.8) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 20.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 11.7) {
																		if (x[1] <= 20.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[0] <= 13.0) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 20.3) {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 20.2) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[0] <= 16.3) {
																if (x[0] <= 16.1) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 20.5) {
																		return 0.0f;
																	}
																	else {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[3] <= 2.0) {
																	if (x[0] <= 17.1) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 20.3) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 17.5) {
																				if (x[1] <= 20.4) {
																					return 0.0f;
																				}
																				else {
																					if (x[0] <= 17.3) {
																						if (x[1] <= 20.5) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[0] <= 16.9) {
																		if (x[1] <= 20.4) {
																			if (x[0] <= 16.5) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 20.2) {
																					return 0.0f;
																				}
																				else {
																					if (x[0] <= 16.7) {
																						if (x[1] <= 20.3) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}

												}

											}
											else {
												if (x[0] <= 17.9) {
													if (x[1] <= 20.2) {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}

								}

							}

						}

					}
					else {
						if (x[2] <= 0.75) {
							return 0.0f;
						}
						else {
							if (x[3] <= 1.6) {
								if (x[1] <= 21.1) {
									return 0.0f;
								}
								else {
									if (x[0] <= 17.5) {
										if (x[0] <= 7.1) {
											if (x[0] <= 3.8) {
												if (x[0] <= 1.1) {
													if (x[1] <= 21.6) {
														if (x[3] <= 1.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 0.9) {
																if (x[1] <= 21.2) {
																	if (x[0] <= 0.7) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[1] <= 21.5) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 0.9) {
															return 9.0f;
														}
														else {
															if (x[1] <= 21.7) {
																if (x[3] <= 1.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 3.4) {
														if (x[0] <= 1.2) {
															if (x[1] <= 21.8) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.4) {
																	if (x[1] <= 22.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 3.3) {
																return 0.0f;
															}
															else {
																if (x[1] <= 22.0) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 21.5) {
															if (x[0] <= 3.7) {
																return 0.0f;
															}
															else {
																if (x[1] <= 21.4) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[3] <= 1.4) {
																if (x[1] <= 21.9) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 3.6) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 3.7) {
																			if (x[1] <= 22.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[0] <= 3.6) {
																	if (x[1] <= 21.8) {
																		if (x[1] <= 21.7) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 3.5) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= 21.6) {
													if (x[3] <= 1.4) {
														return 0.0f;
													}
													else {
														if (x[0] <= 6.9) {
															if (x[1] <= 21.2) {
																if (x[0] <= 3.9) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 6.8) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[1] <= 21.5) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 21.7) {
														if (x[0] <= 6.9) {
															if (x[0] <= 3.9) {
																if (x[3] <= 1.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[3] <= 1.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 11.6) {
												if (x[0] <= 7.3) {
													if (x[1] <= 21.8) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.4) {
															if (x[1] <= 22.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 13.4) {
													if (x[1] <= 21.6) {
														if (x[3] <= 1.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 11.9) {
																if (x[0] <= 11.8) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 21.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[0] <= 13.2) {
																	return 9.0f;
																}
																else {
																	if (x[0] <= 13.3) {
																		if (x[1] <= 21.3) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
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
														if (x[0] <= 11.9) {
															if (x[3] <= 1.4) {
																if (x[0] <= 11.8) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 21.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[0] <= 11.7) {
																	if (x[1] <= 21.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 13.3) {
																return 9.0f;
															}
															else {
																if (x[1] <= 21.8) {
																	if (x[1] <= 21.7) {
																		return 0.0f;
																	}
																	else {
																		if (x[3] <= 1.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													if (x[0] <= 15.9) {
														return 0.0f;
													}
													else {
														if (x[1] <= 21.6) {
															if (x[0] <= 17.1) {
																return 0.0f;
															}
															else {
																if (x[1] <= 21.4) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.4) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 17.3) {
																			if (x[1] <= 21.5) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[3] <= 1.4) {
																if (x[0] <= 17.1) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 21.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 17.3) {
																			if (x[1] <= 22.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 21.9) {
																	if (x[0] <= 16.7) {
																		if (x[0] <= 16.5) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 21.8) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		if (x[0] <= 16.9) {
																			if (x[1] <= 21.7) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= 21.6) {
											if (x[3] <= 1.4) {
												return 0.0f;
											}
											else {
												if (x[0] <= 17.9) {
													if (x[1] <= 21.3) {
														if (x[0] <= 17.7) {
															return 0.0f;
														}
														else {
															if (x[1] <= 21.2) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											if (x[0] <= 17.9) {
												if (x[1] <= 21.8) {
													if (x[3] <= 1.4) {
														if (x[0] <= 17.7) {
															return 0.0f;
														}
														else {
															if (x[1] <= 21.7) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												return 9.0f;
											}

										}

									}

								}

							}
							else {
								if (x[0] <= 16.7) {
									if (x[0] <= 7.1) {
										if (x[0] <= 3.5) {
											if (x[0] <= 1.1) {
												if (x[0] <= 0.7) {
													if (x[1] <= 20.7) {
														if (x[0] <= 0.6) {
															return 9.0f;
														}
														else {
															if (x[3] <= 1.8) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[1] <= 21.1) {
														if (x[0] <= 0.9) {
															if (x[1] <= 21.0) {
																if (x[3] <= 1.8) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 20.8) {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																if (x[1] <= 20.9) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 21.3) {
															if (x[3] <= 1.8) {
																if (x[0] <= 0.9) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 3.0) {
													if (x[1] <= 21.5) {
														if (x[3] <= 2.0) {
															if (x[0] <= 1.2) {
																if (x[1] <= 21.4) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[0] <= 2.8) {
																if (x[0] <= 1.2) {
																	if (x[1] <= 21.2) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 2.7) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 21.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 21.1) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 21.2) {
																		if (x[0] <= 2.9) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[0] <= 1.4) {
															if (x[1] <= 21.9) {
																if (x[3] <= 1.8) {
																	if (x[0] <= 1.2) {
																		if (x[1] <= 21.6) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 21.7) {
																		if (x[0] <= 1.2) {
																			return 9.0f;
																		}
																		else {
																			if (x[3] <= 2.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 2.6) {
																if (x[3] <= 2.0) {
																	if (x[0] <= 1.6) {
																		if (x[1] <= 22.0) {
																			return 0.0f;
																		}
																		else {
																			if (x[3] <= 1.8) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[1] <= 21.8) {
																		if (x[0] <= 2.5) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 21.7) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		if (x[0] <= 1.6) {
																			return 9.0f;
																		}
																		else {
																			if (x[0] <= 2.4) {
																				if (x[0] <= 2.3) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 22.0) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[3] <= 1.8) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 2.0) {
																		if (x[1] <= 21.7) {
																			if (x[0] <= 2.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 21.6) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}
																		else {
																			if (x[0] <= 2.8) {
																				if (x[1] <= 21.9) {
																					return 0.0f;
																				}
																				else {
																					if (x[0] <= 2.7) {
																						if (x[1] <= 22.0) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}

												}
												else {
													if (x[1] <= 21.3) {
														if (x[3] <= 2.0) {
															if (x[3] <= 1.8) {
																return 0.0f;
															}
															else {
																if (x[0] <= 3.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 21.0) {
																		if (x[0] <= 3.4) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 20.8) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		if (x[0] <= 3.3) {
																			if (x[1] <= 21.1) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[0] <= 3.2) {
																if (x[1] <= 20.9) {
																	if (x[1] <= 20.8) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 3.1) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[3] <= 1.8) {
															if (x[1] <= 21.8) {
																if (x[0] <= 3.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 21.6) {
																		if (x[0] <= 3.4) {
																			if (x[1] <= 21.5) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 3.3) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[0] <= 3.1) {
																	if (x[1] <= 21.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[1] <= 21.4) {
																if (x[0] <= 3.1) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[0] <= 6.8) {
												if (x[0] <= 3.8) {
													if (x[1] <= 21.2) {
														if (x[3] <= 1.8) {
															if (x[1] <= 20.9) {
																return 0.0f;
															}
															else {
																if (x[0] <= 3.6) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 21.0) {
																		if (x[0] <= 3.7) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 20.7) {
																if (x[0] <= 3.6) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[1] <= 20.7) {
														if (x[0] <= 6.6) {
															if (x[0] <= 3.9) {
																if (x[3] <= 1.8) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[3] <= 1.8) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[1] <= 21.3) {
													if (x[1] <= 21.0) {
														if (x[3] <= 1.8) {
															return 0.0f;
														}
														else {
															if (x[0] <= 6.9) {
																if (x[1] <= 20.8) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[1] <= 20.9) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[0] <= 6.9) {
															return 9.0f;
														}
														else {
															if (x[3] <= 1.8) {
																return 0.0f;
															}
															else {
																if (x[1] <= 21.1) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 11.3) {
											if (x[0] <= 7.4) {
												if (x[1] <= 21.4) {
													if (x[3] <= 2.0) {
														return 0.0f;
													}
													else {
														if (x[1] <= 21.2) {
															return 0.0f;
														}
														else {
															if (x[0] <= 7.3) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 21.7) {
														if (x[0] <= 7.3) {
															if (x[3] <= 1.8) {
																if (x[1] <= 21.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																if (x[1] <= 21.5) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 7.3) {
															return 9.0f;
														}
														else {
															if (x[3] <= 1.8) {
																if (x[1] <= 21.9) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 11.1) {
													if (x[0] <= 7.6) {
														if (x[1] <= 21.8) {
															return 0.0f;
														}
														else {
															if (x[3] <= 2.0) {
																if (x[1] <= 22.0) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 11.0) {
															return 0.0f;
														}
														else {
															if (x[1] <= 21.9) {
																return 0.0f;
															}
															else {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= 21.4) {
														return 0.0f;
													}
													else {
														if (x[3] <= 2.0) {
															if (x[1] <= 21.9) {
																return 0.0f;
															}
															else {
																if (x[0] <= 11.2) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 21.6) {
																if (x[0] <= 11.2) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[0] <= 13.3) {
												if (x[0] <= 11.7) {
													if (x[1] <= 21.4) {
														if (x[3] <= 1.8) {
															return 0.0f;
														}
														else {
															if (x[0] <= 11.5) {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 20.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 21.1) {
																			if (x[0] <= 11.4) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 21.1) {
																	if (x[3] <= 2.0) {
																		if (x[1] <= 20.9) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 11.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[3] <= 1.8) {
															if (x[0] <= 11.5) {
																if (x[1] <= 21.9) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 11.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[1] <= 21.6) {
																	if (x[0] <= 11.6) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 11.4) {
																if (x[1] <= 21.6) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 21.2) {
														if (x[0] <= 13.2) {
															if (x[0] <= 11.9) {
																if (x[3] <= 1.8) {
																	if (x[1] <= 20.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 11.8) {
																			if (x[1] <= 21.1) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[0] <= 13.1) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 20.8) {
																		if (x[3] <= 1.8) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 20.7) {
																				if (x[3] <= 2.0) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 21.0) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.8) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 21.1) {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[0] <= 15.6) {
													if (x[1] <= 21.5) {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[0] <= 15.5) {
																if (x[0] <= 13.4) {
																	if (x[1] <= 21.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 21.3) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 13.4) {
															if (x[1] <= 21.6) {
																if (x[3] <= 1.8) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 15.3) {
																if (x[0] <= 13.5) {
																	if (x[1] <= 21.9) {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 21.8) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		if (x[3] <= 1.8) {
																			if (x[1] <= 22.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 15.1) {
																		return 0.0f;
																	}
																	else {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 21.8) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 21.9) {
																					if (x[0] <= 15.2) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}

																}

															}
															else {
																if (x[3] <= 1.8) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 2.0) {
																		if (x[1] <= 21.9) {
																			if (x[0] <= 15.5) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 21.7) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}
																		else {
																			if (x[0] <= 15.4) {
																				if (x[1] <= 22.0) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		if (x[1] <= 21.6) {
																			if (x[0] <= 15.4) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}

													}

												}
												else {
													if (x[1] <= 21.4) {
														if (x[3] <= 1.8) {
															if (x[1] <= 21.3) {
																return 0.0f;
															}
															else {
																if (x[0] <= 16.5) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 15.9) {
																if (x[3] <= 2.0) {
																	if (x[1] <= 21.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 15.8) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= 20.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 21.2) {
																			if (x[0] <= 15.7) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 21.0) {
																					if (x[0] <= 15.8) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 21.0) {
																	if (x[3] <= 2.0) {
																		if (x[0] <= 16.3) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 20.8) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 16.5) {
																					if (x[1] <= 20.9) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[0] <= 16.1) {
																		if (x[1] <= 21.1) {
																			if (x[3] <= 2.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[0] <= 15.9) {
															if (x[3] <= 1.8) {
																if (x[1] <= 21.7) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 15.7) {
																		if (x[1] <= 22.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		if (x[1] <= 21.8) {
																			if (x[0] <= 15.8) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 21.6) {
																	if (x[0] <= 15.7) {
																		if (x[3] <= 2.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[1] <= 21.5) {
																if (x[3] <= 1.8) {
																	if (x[0] <= 16.3) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}

										}

									}

								}
								else {
									if (x[0] <= 17.9) {
										if (x[1] <= 21.2) {
											if (x[3] <= 1.8) {
												if (x[0] <= 17.3) {
													if (x[1] <= 21.0) {
														return 0.0f;
													}
													else {
														if (x[0] <= 16.9) {
															return 0.0f;
														}
														else {
															if (x[0] <= 17.1) {
																if (x[1] <= 21.1) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 20.9) {
														if (x[0] <= 17.5) {
															return 0.0f;
														}
														else {
															if (x[1] <= 20.7) {
																return 0.0f;
															}
															else {
																if (x[0] <= 17.7) {
																	if (x[1] <= 20.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[0] <= 16.9) {
													if (x[1] <= 20.7) {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											return 9.0f;
										}

									}
									else {
										return 9.0f;
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
		if (x[2] <= 0.75) {
			if (x[3] <= 0.1) {
				if (x[1] <= 25.125) {
					if (x[0] <= 7.8) {
						if (x[1] <= 22.5) {
							if (x[0] <= 2.2) {
								if (x[0] <= 1.7) {
									return 0.0f;
								}
								else {
									if (x[1] <= 22.4) {
										if (x[0] <= 2.1) {
											return 0.0f;
										}
										else {
											if (x[1] <= 22.3) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[0] <= 1.9) {
											return 0.0f;
										}
										else {
											if (x[0] <= 2.0) {
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
								return 0.0f;
							}

						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 10.7) {
							if (x[1] <= 22.9) {
								if (x[0] <= 8.0) {
									if (x[1] <= 22.4) {
										return 0.0f;
									}
									else {
										if (x[0] <= 7.9) {
											return 0.0f;
										}
										else {
											if (x[1] <= 22.7) {
												return 0.0f;
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
								if (x[0] <= 9.0) {
									if (x[1] <= 23.2) {
										if (x[0] <= 8.8) {
											return 0.0f;
										}
										else {
											if (x[0] <= 8.9) {
												if (x[1] <= 23.0) {
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
								else {
									if (x[1] <= 24.1) {
										if (x[0] <= 10.3) {
											if (x[0] <= 9.3) {
												if (x[1] <= 23.6) {
													if (x[1] <= 23.4) {
														return 0.0f;
													}
													else {
														if (x[0] <= 9.1) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[0] <= 9.2) {
														return 0.0f;
													}
													else {
														if (x[1] <= 23.8) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 23.9) {
													return 0.0f;
												}
												else {
													if (x[0] <= 10.2) {
														if (x[0] <= 9.4) {
															if (x[1] <= 24.0) {
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
										else {
											if (x[1] <= 23.6) {
												if (x[0] <= 10.5) {
													if (x[1] <= 23.4) {
														return 0.0f;
													}
													else {
														if (x[0] <= 10.4) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 23.1) {
														if (x[0] <= 10.6) {
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
										if (x[1] <= 24.6) {
											if (x[0] <= 10.1) {
												if (x[0] <= 9.5) {
													if (x[0] <= 9.4) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.2) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 24.4) {
														return 0.0f;
													}
													else {
														if (x[0] <= 9.6) {
															return 0.0f;
														}
														else {
															if (x[0] <= 9.9) {
																return 0.0f;
															}
															else {
																if (x[0] <= 10.0) {
																	if (x[1] <= 24.5) {
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
											else {
												return 0.0f;
											}

										}
										else {
											if (x[1] <= 24.7) {
												if (x[0] <= 9.8) {
													return 0.0f;
												}
												else {
													if (x[0] <= 9.9) {
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
							if (x[0] <= 15.0) {
								if (x[0] <= 13.6) {
									if (x[0] <= 10.9) {
										if (x[1] <= 22.6) {
											if (x[1] <= 22.4) {
												return 0.0f;
											}
											else {
												if (x[0] <= 10.8) {
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
										if (x[1] <= 22.2) {
											if (x[0] <= 13.5) {
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
									if (x[1] <= 23.4) {
										if (x[0] <= 14.5) {
											if (x[1] <= 23.0) {
												if (x[0] <= 13.7) {
													if (x[1] <= 22.6) {
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
												if (x[0] <= 13.8) {
													return 0.0f;
												}
												else {
													if (x[0] <= 14.3) {
														if (x[0] <= 14.2) {
															return 0.0f;
														}
														else {
															if (x[1] <= 23.3) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 23.1) {
															if (x[0] <= 14.4) {
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
											if (x[1] <= 22.8) {
												if (x[0] <= 14.7) {
													if (x[1] <= 22.7) {
														return 0.0f;
													}
													else {
														if (x[0] <= 14.6) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 22.5) {
														if (x[0] <= 14.9) {
															if (x[1] <= 22.4) {
																return 0.0f;
															}
															else {
																if (x[0] <= 14.8) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 22.2) {
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
												return 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 23.6) {
											if (x[0] <= 14.1) {
												if (x[0] <= 13.9) {
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
							else {
								return 0.0f;
							}

						}

					}

				}
				else {
					return 9.0f;
				}

			}
			else {
				if (x[1] <= 25.125) {
					return 0.0f;
				}
				else {
					return 9.0f;
				}

			}

		}
		else {
			if (x[3] <= 0.8) {
				if (x[1] <= 24.1) {
					if (x[3] <= 0.4) {
						return 0.0f;
					}
					else {
						if (x[1] <= 23.1) {
							return 0.0f;
						}
						else {
							if (x[1] <= 23.6) {
								if (x[3] <= 0.6) {
									return 0.0f;
								}
								else {
									if (x[0] <= 17.9) {
										if (x[0] <= 7.6) {
											if (x[0] <= 3.9) {
												if (x[0] <= 1.6) {
													if (x[0] <= 1.4) {
														return 9.0f;
													}
													else {
														if (x[1] <= 23.2) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[0] <= 3.6) {
														if (x[0] <= 1.7) {
															if (x[1] <= 23.5) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 23.4) {
															if (x[0] <= 3.8) {
																return 0.0f;
															}
															else {
																if (x[1] <= 23.2) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 3.7) {
																if (x[1] <= 23.5) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 7.4) {
													return 9.0f;
												}
												else {
													if (x[1] <= 23.2) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 11.8) {
												if (x[0] <= 7.8) {
													if (x[1] <= 23.5) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 13.6) {
													if (x[0] <= 11.9) {
														if (x[1] <= 23.4) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[0] <= 15.9) {
														if (x[0] <= 13.7) {
															if (x[1] <= 23.3) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 23.5) {
															if (x[0] <= 17.3) {
																return 0.0f;
															}
															else {
																if (x[1] <= 23.3) {
																	if (x[0] <= 17.7) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 23.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 17.5) {
																		if (x[1] <= 23.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}
									else {
										return 9.0f;
									}

								}

							}
							else {
								if (x[0] <= 17.7) {
									if (x[0] <= 7.8) {
										if (x[0] <= 3.8) {
											if (x[0] <= 1.7) {
												if (x[0] <= 1.6) {
													return 9.0f;
												}
												else {
													if (x[1] <= 23.7) {
														if (x[3] <= 0.6) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[0] <= 3.4) {
													if (x[0] <= 1.9) {
														if (x[1] <= 23.8) {
															return 0.0f;
														}
														else {
															if (x[3] <= 0.6) {
																if (x[1] <= 24.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 3.3) {
															return 0.0f;
														}
														else {
															if (x[1] <= 24.0) {
																return 0.0f;
															}
															else {
																if (x[3] <= 0.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													if (x[3] <= 0.6) {
														if (x[1] <= 23.9) {
															return 0.0f;
														}
														else {
															if (x[0] <= 3.6) {
																return 0.0f;
															}
															else {
																if (x[0] <= 3.7) {
																	if (x[1] <= 24.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 23.8) {
															if (x[0] <= 3.6) {
																if (x[0] <= 3.5) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 23.7) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 23.7) {
												if (x[0] <= 7.6) {
													if (x[0] <= 3.9) {
														if (x[3] <= 0.6) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[3] <= 0.6) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												return 9.0f;
											}

										}

									}
									else {
										if (x[0] <= 11.6) {
											if (x[0] <= 7.9) {
												if (x[1] <= 23.8) {
													return 0.0f;
												}
												else {
													if (x[3] <= 0.6) {
														if (x[1] <= 24.0) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[0] <= 13.8) {
												if (x[0] <= 11.9) {
													if (x[3] <= 0.6) {
														if (x[0] <= 11.8) {
															return 0.0f;
														}
														else {
															if (x[1] <= 23.9) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 11.7) {
															if (x[1] <= 23.9) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[0] <= 13.7) {
														return 9.0f;
													}
													else {
														if (x[1] <= 23.8) {
															if (x[1] <= 23.7) {
																return 0.0f;
															}
															else {
																if (x[3] <= 0.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 15.7) {
													if (x[0] <= 15.6) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.0) {
															return 0.0f;
														}
														else {
															if (x[3] <= 0.6) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[3] <= 0.6) {
														if (x[1] <= 23.9) {
															if (x[0] <= 17.5) {
																return 0.0f;
															}
															else {
																if (x[1] <= 23.8) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 15.9) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 15.9) {
															if (x[1] <= 23.8) {
																if (x[0] <= 15.8) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 23.7) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}

								}
								else {
									if (x[0] <= 17.9) {
										if (x[1] <= 23.7) {
											if (x[3] <= 0.6) {
												return 0.0f;
											}
											else {
												return 9.0f;
											}

										}
										else {
											return 9.0f;
										}

									}
									else {
										return 9.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[3] <= 0.2) {
						if (x[1] <= 24.6) {
							return 0.0f;
						}
						else {
							if (x[3] <= 0.0) {
								if (x[1] <= 25.125) {
									if (x[1] <= 24.9) {
										if (x[0] <= 17.9) {
											if (x[0] <= 8.0) {
												if (x[0] <= 3.9) {
													if (x[0] <= 2.0) {
														if (x[0] <= 1.9) {
															return 0.0f;
														}
														else {
															if (x[1] <= 24.7) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[0] <= 3.8) {
															return 0.0f;
														}
														else {
															if (x[1] <= 24.7) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 7.9) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.7) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 11.9) {
													return 0.0f;
												}
												else {
													if (x[0] <= 13.9) {
														return 0.0f;
													}
													else {
														if (x[0] <= 15.9) {
															if (x[0] <= 14.0) {
																if (x[1] <= 24.8) {
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
															if (x[1] <= 24.7) {
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
										else {
											return 0.0f;
										}

									}
									else {
										if (x[0] <= 9.9) {
											return 0.0f;
										}
										else {
											if (x[0] <= 11.8) {
												if (x[0] <= 10.0) {
													if (x[1] <= 25.0) {
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
												if (x[0] <= 15.8) {
													if (x[0] <= 14.0) {
														return 0.0f;
													}
													else {
														if (x[1] <= 25.0) {
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
								else {
									return 9.0f;
								}

							}
							else {
								if (x[1] <= 24.9) {
									if (x[0] <= 17.9) {
										if (x[0] <= 8.0) {
											if (x[0] <= 3.9) {
												if (x[0] <= 2.0) {
													if (x[0] <= 1.9) {
														return 9.0f;
													}
													else {
														if (x[1] <= 24.7) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[0] <= 3.8) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.7) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 7.9) {
													return 9.0f;
												}
												else {
													if (x[1] <= 24.7) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 11.9) {
												return 0.0f;
											}
											else {
												if (x[0] <= 13.9) {
													return 9.0f;
												}
												else {
													if (x[0] <= 15.9) {
														if (x[0] <= 14.0) {
															if (x[1] <= 24.8) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 24.7) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}
									else {
										return 9.0f;
									}

								}
								else {
									if (x[0] <= 9.9) {
										return 9.0f;
									}
									else {
										if (x[0] <= 11.8) {
											if (x[1] <= 25.125) {
												if (x[0] <= 10.0) {
													if (x[1] <= 25.0) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											if (x[1] <= 25.0) {
												if (x[0] <= 15.8) {
													if (x[0] <= 14.0) {
														return 9.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												return 9.0f;
											}

										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= 24.7) {
							if (x[0] <= 15.9) {
								if (x[0] <= 8.0) {
									if (x[0] <= 3.8) {
										if (x[0] <= 1.9) {
											if (x[0] <= 1.7) {
												return 9.0f;
											}
											else {
												if (x[1] <= 24.2) {
													if (x[3] <= 0.4) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											if (x[3] <= 0.4) {
												if (x[0] <= 3.6) {
													if (x[0] <= 2.0) {
														if (x[1] <= 24.5) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 24.4) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.5) {
															if (x[0] <= 3.7) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 24.5) {
													if (x[0] <= 3.4) {
														if (x[3] <= 0.6) {
															if (x[0] <= 2.0) {
																if (x[1] <= 24.3) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= 24.3) {
																if (x[0] <= 3.2) {
																	if (x[0] <= 2.0) {
																		return 9.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 3.6) {
															if (x[1] <= 24.3) {
																if (x[3] <= 0.6) {
																	if (x[0] <= 3.5) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 24.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 7.9) {
											if (x[1] <= 24.2) {
												if (x[0] <= 3.9) {
													if (x[3] <= 0.4) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[0] <= 7.8) {
														return 9.0f;
													}
													else {
														if (x[3] <= 0.4) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											if (x[1] <= 24.5) {
												if (x[3] <= 0.4) {
													return 0.0f;
												}
												else {
													if (x[1] <= 24.3) {
														if (x[3] <= 0.6) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												return 9.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 11.5) {
										if (x[0] <= 9.6) {
											if (x[1] <= 24.3) {
												return 0.0f;
											}
											else {
												if (x[3] <= 0.4) {
													return 0.0f;
												}
												else {
													if (x[1] <= 24.5) {
														if (x[3] <= 0.6) {
															return 0.0f;
														}
														else {
															if (x[0] <= 9.5) {
																return 9.0f;
															}
															else {
																if (x[1] <= 24.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 24.6) {
												if (x[0] <= 11.4) {
													return 0.0f;
												}
												else {
													if (x[3] <= 0.6) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.4) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 9.8) {
													if (x[3] <= 0.4) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[0] <= 11.3) {
														return 0.0f;
													}
													else {
														if (x[3] <= 0.6) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[0] <= 13.9) {
											if (x[0] <= 11.9) {
												if (x[3] <= 0.4) {
													if (x[0] <= 11.7) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 11.8) {
																if (x[1] <= 24.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 11.7) {
														if (x[3] <= 0.6) {
															if (x[1] <= 24.4) {
																return 0.0f;
															}
															else {
																if (x[0] <= 11.6) {
																	if (x[1] <= 24.6) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[0] <= 13.8) {
													return 9.0f;
												}
												else {
													if (x[1] <= 24.3) {
														if (x[3] <= 0.4) {
															return 0.0f;
														}
														else {
															if (x[1] <= 24.2) {
																if (x[3] <= 0.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 15.4) {
												if (x[1] <= 24.4) {
													return 0.0f;
												}
												else {
													if (x[3] <= 0.6) {
														if (x[0] <= 14.0) {
															if (x[1] <= 24.6) {
																return 0.0f;
															}
															else {
																if (x[3] <= 0.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 15.3) {
															if (x[0] <= 14.0) {
																if (x[1] <= 24.5) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[0] <= 15.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 24.6) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[3] <= 0.4) {
													if (x[1] <= 24.5) {
														return 0.0f;
													}
													else {
														if (x[0] <= 15.7) {
															return 0.0f;
														}
														else {
															if (x[0] <= 15.8) {
																if (x[1] <= 24.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[3] <= 0.6) {
														if (x[0] <= 15.7) {
															if (x[1] <= 24.4) {
																return 0.0f;
															}
															else {
																if (x[0] <= 15.5) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 24.5) {
																		if (x[0] <= 15.6) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 24.2) {
																if (x[0] <= 15.8) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 15.5) {
															if (x[1] <= 24.3) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}

								}

							}
							else {
								if (x[1] <= 24.3) {
									if (x[3] <= 0.4) {
										if (x[0] <= 17.9) {
											if (x[0] <= 17.7) {
												return 0.0f;
											}
											else {
												if (x[1] <= 24.2) {
													return 0.0f;
												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											return 9.0f;
										}

									}
									else {
										return 9.0f;
									}

								}
								else {
									return 9.0f;
								}

							}

						}
						else {
							if (x[0] <= 9.8) {
								return 9.0f;
							}
							else {
								if (x[0] <= 11.5) {
									if (x[1] <= 25.125) {
										if (x[0] <= 9.9) {
											if (x[1] <= 24.8) {
												return 0.0f;
											}
											else {
												return 9.0f;
											}

										}
										else {
											if (x[0] <= 11.2) {
												if (x[0] <= 10.0) {
													if (x[1] <= 25.0) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[3] <= 0.6) {
													if (x[0] <= 11.4) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.9) {
															return 0.0f;
														}
														else {
															if (x[3] <= 0.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 11.3) {
														if (x[1] <= 24.9) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}

									}
									else {
										return 9.0f;
									}

								}
								else {
									if (x[1] <= 24.9) {
										if (x[0] <= 15.7) {
											if (x[0] <= 14.0) {
												if (x[0] <= 11.7) {
													if (x[3] <= 0.4) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												if (x[3] <= 0.4) {
													if (x[0] <= 15.6) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.8) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[1] <= 24.8) {
														if (x[3] <= 0.6) {
															if (x[0] <= 15.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											return 9.0f;
										}

									}
									else {
										if (x[0] <= 11.6) {
											if (x[3] <= 0.4) {
												if (x[1] <= 25.125) {
													return 0.0f;
												}
												else {
													return 9.0f;
												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											return 9.0f;
										}

									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[1] <= 23.6) {
					if (x[0] <= 15.9) {
						if (x[0] <= 7.6) {
							if (x[0] <= 3.6) {
								if (x[0] <= 1.4) {
									if (x[3] <= 1.0) {
										if (x[1] <= 22.6) {
											return 0.0f;
										}
										else {
											if (x[1] <= 22.7) {
												if (x[0] <= 1.2) {
													return 9.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 9.0f;
											}

										}

									}
									else {
										if (x[0] <= 1.2) {
											if (x[1] <= 22.2) {
												if (x[0] <= 1.1) {
													return 9.0f;
												}
												else {
													if (x[3] <= 1.2) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											if (x[1] <= 22.5) {
												if (x[3] <= 1.4) {
													if (x[1] <= 22.3) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.2) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												return 9.0f;
											}

										}

									}

								}
								else {
									if (x[3] <= 1.4) {
										if (x[1] <= 22.8) {
											if (x[0] <= 3.2) {
												if (x[0] <= 1.6) {
													if (x[1] <= 22.6) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.2) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[3] <= 1.2) {
													if (x[1] <= 22.7) {
														return 0.0f;
													}
													else {
														if (x[0] <= 3.5) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 22.5) {
														if (x[0] <= 3.4) {
															return 0.0f;
														}
														else {
															if (x[1] <= 22.3) {
																if (x[0] <= 3.5) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 22.2) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 3.3) {
															if (x[1] <= 22.6) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 1.7) {
												if (x[1] <= 23.1) {
													if (x[0] <= 1.6) {
														if (x[3] <= 1.0) {
															if (x[1] <= 23.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[3] <= 1.2) {
															return 0.0f;
														}
														else {
															if (x[1] <= 22.9) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 1.6) {
														return 9.0f;
													}
													else {
														if (x[3] <= 1.0) {
															if (x[1] <= 23.3) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 3.0) {
													if (x[3] <= 1.2) {
														if (x[0] <= 1.9) {
															if (x[1] <= 23.4) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[1] <= 23.2) {
															if (x[0] <= 2.9) {
																return 0.0f;
															}
															else {
																if (x[1] <= 23.1) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 1.9) {
																return 9.0f;
															}
															else {
																if (x[0] <= 2.8) {
																	if (x[1] <= 23.4) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 2.6) {
																			if (x[0] <= 2.0) {
																				if (x[1] <= 23.5) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[0] <= 2.7) {
																				if (x[1] <= 23.5) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													if (x[3] <= 1.0) {
														if (x[0] <= 3.3) {
															return 0.0f;
														}
														else {
															if (x[1] <= 23.2) {
																return 0.0f;
															}
															else {
																if (x[0] <= 3.4) {
																	if (x[1] <= 23.5) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[1] <= 23.3) {
																		if (x[0] <= 3.5) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[3] <= 1.2) {
															if (x[0] <= 3.4) {
																if (x[1] <= 23.1) {
																	if (x[0] <= 3.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 23.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 3.2) {
																		if (x[1] <= 23.3) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 23.4) {
																				if (x[0] <= 3.1) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[1] <= 22.9) {
																if (x[0] <= 3.1) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}

										}

									}
									else {
										if (x[0] <= 2.8) {
											if (x[1] <= 22.8) {
												if (x[3] <= 1.8) {
													if (x[0] <= 1.6) {
														if (x[1] <= 22.4) {
															if (x[3] <= 1.6) {
																return 0.0f;
															}
															else {
																if (x[1] <= 22.2) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[1] <= 22.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 2.6) {
																if (x[0] <= 1.7) {
																	if (x[1] <= 22.5) {
																		return 0.0f;
																	}
																	else {
																		if (x[3] <= 1.6) {
																			if (x[1] <= 22.7) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 2.5) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 22.7) {
																			return 0.0f;
																		}
																		else {
																			if (x[3] <= 1.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[3] <= 1.6) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 22.5) {
																		if (x[0] <= 2.7) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}

												}
												else {
													if (x[0] <= 2.4) {
														if (x[0] <= 1.7) {
															if (x[1] <= 22.3) {
																if (x[0] <= 1.6) {
																	return 9.0f;
																}
																else {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[3] <= 2.0) {
																if (x[1] <= 22.6) {
																	if (x[0] <= 2.3) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 22.5) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 1.9) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 2.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 22.4) {
																	if (x[0] <= 2.2) {
																		if (x[0] <= 2.1) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 22.3) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	if (x[1] <= 22.5) {
																		if (x[0] <= 2.0) {
																			if (x[0] <= 1.9) {
																				return 9.0f;
																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 22.3) {
															if (x[0] <= 2.6) {
																if (x[3] <= 2.0) {
																	if (x[0] <= 2.5) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 22.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[3] <= 1.8) {
													if (x[0] <= 1.9) {
														if (x[1] <= 23.0) {
															if (x[0] <= 1.7) {
																return 9.0f;
															}
															else {
																if (x[3] <= 1.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[1] <= 23.3) {
															if (x[0] <= 2.4) {
																if (x[3] <= 1.6) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 23.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 2.2) {
																			if (x[0] <= 2.0) {
																				if (x[1] <= 23.1) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[1] <= 23.1) {
																				if (x[0] <= 2.3) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[3] <= 1.6) {
																	if (x[0] <= 2.6) {
																		if (x[1] <= 23.2) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 2.5) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		if (x[1] <= 23.0) {
																			if (x[0] <= 2.7) {
																				return 0.0f;
																			}
																			else {
																				if (x[1] <= 22.9) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[3] <= 1.6) {
																if (x[0] <= 2.4) {
																	if (x[1] <= 23.5) {
																		if (x[0] <= 2.0) {
																			return 9.0f;
																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 22.9) {
														if (x[0] <= 2.1) {
															if (x[0] <= 1.9) {
																return 9.0f;
															}
															else {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											if (x[3] <= 1.6) {
												if (x[1] <= 22.7) {
													if (x[0] <= 3.2) {
														if (x[1] <= 22.3) {
															return 0.0f;
														}
														else {
															if (x[0] <= 3.0) {
																if (x[1] <= 22.6) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 2.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[1] <= 22.4) {
																	if (x[0] <= 3.1) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												if (x[1] <= 22.2) {
													if (x[0] <= 2.9) {
														if (x[3] <= 1.8) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}

								}

							}
							else {
								if (x[3] <= 1.0) {
									if (x[1] <= 22.6) {
										return 0.0f;
									}
									else {
										if (x[1] <= 23.0) {
											if (x[0] <= 7.4) {
												if (x[0] <= 3.8) {
													if (x[1] <= 22.9) {
														return 0.0f;
													}
													else {
														if (x[0] <= 3.7) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[1] <= 22.7) {
														if (x[0] <= 3.9) {
															return 0.0f;
														}
														else {
															if (x[0] <= 7.3) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											return 9.0f;
										}

									}

								}
								else {
									if (x[0] <= 7.3) {
										if (x[3] <= 1.2) {
											if (x[0] <= 3.9) {
												if (x[1] <= 22.5) {
													if (x[0] <= 3.8) {
														if (x[1] <= 22.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 3.7) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[1] <= 22.2) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												if (x[0] <= 7.1) {
													return 9.0f;
												}
												else {
													if (x[1] <= 22.2) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											return 9.0f;
										}

									}
									else {
										if (x[1] <= 22.8) {
											if (x[3] <= 1.4) {
												if (x[1] <= 22.5) {
													if (x[0] <= 7.4) {
														if (x[1] <= 22.3) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.2) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 7.4) {
														return 9.0f;
													}
													else {
														if (x[3] <= 1.2) {
															return 0.0f;
														}
														else {
															if (x[1] <= 22.6) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= 22.4) {
													if (x[3] <= 1.8) {
														if (x[0] <= 7.4) {
															return 9.0f;
														}
														else {
															if (x[3] <= 1.6) {
																return 0.0f;
															}
															else {
																if (x[1] <= 22.2) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											return 9.0f;
										}

									}

								}

							}

						}
						else {
							if (x[0] <= 11.1) {
								if (x[0] <= 7.9) {
									if (x[1] <= 22.9) {
										if (x[3] <= 1.6) {
											if (x[1] <= 22.7) {
												return 0.0f;
											}
											else {
												if (x[3] <= 1.4) {
													return 0.0f;
												}
												else {
													if (x[0] <= 7.8) {
														return 9.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 22.5) {
												if (x[3] <= 1.8) {
													return 0.0f;
												}
												else {
													if (x[0] <= 7.8) {
														if (x[1] <= 22.3) {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[1] <= 22.4) {
															return 0.0f;
														}
														else {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 7.8) {
													return 9.0f;
												}
												else {
													if (x[3] <= 1.8) {
														if (x[1] <= 22.8) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[1] <= 22.6) {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[3] <= 1.2) {
											if (x[1] <= 23.1) {
												return 0.0f;
											}
											else {
												if (x[0] <= 7.8) {
													if (x[1] <= 23.3) {
														if (x[3] <= 1.0) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[1] <= 23.4) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.0) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 7.8) {
												return 9.0f;
											}
											else {
												if (x[1] <= 23.2) {
													if (x[3] <= 1.4) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.6) {
															if (x[1] <= 23.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}

								}
								else {
									if (x[3] <= 1.6) {
										if (x[1] <= 23.5) {
											if (x[1] <= 23.3) {
												return 0.0f;
											}
											else {
												if (x[0] <= 8.0) {
													if (x[3] <= 1.4) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[0] <= 11.0) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.4) {
															return 0.0f;
														}
														else {
															if (x[1] <= 23.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[3] <= 1.4) {
												if (x[0] <= 8.0) {
													if (x[3] <= 1.2) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 9.1) {
													return 9.0f;
												}
												else {
													if (x[0] <= 11.0) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 23.1) {
											if (x[0] <= 10.8) {
												if (x[3] <= 2.0) {
													if (x[0] <= 8.0) {
														if (x[1] <= 22.9) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.8) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 22.9) {
														if (x[0] <= 10.7) {
															if (x[0] <= 8.0) {
																if (x[1] <= 22.7) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= 22.6) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 8.8) {
															return 9.0f;
														}
														else {
															if (x[0] <= 10.6) {
																if (x[0] <= 8.9) {
																	if (x[1] <= 23.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}
											else {
												if (x[3] <= 1.8) {
													if (x[1] <= 22.9) {
														return 0.0f;
													}
													else {
														if (x[0] <= 11.0) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[1] <= 22.6) {
														if (x[3] <= 2.0) {
															if (x[0] <= 11.0) {
																return 0.0f;
															}
															else {
																if (x[1] <= 22.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 10.9) {
																if (x[1] <= 22.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 10.9) {
															if (x[1] <= 22.9) {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 9.0) {
												if (x[1] <= 23.3) {
													if (x[3] <= 1.8) {
														if (x[0] <= 8.0) {
															return 9.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 8.9) {
															return 9.0f;
														}
														else {
															if (x[1] <= 23.2) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												if (x[0] <= 10.6) {
													if (x[0] <= 9.1) {
														if (x[1] <= 23.4) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[0] <= 10.4) {
															return 0.0f;
														}
														else {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																if (x[0] <= 10.5) {
																	if (x[1] <= 23.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													if (x[0] <= 10.9) {
														if (x[3] <= 1.8) {
															if (x[0] <= 10.8) {
																return 0.0f;
															}
															else {
																if (x[1] <= 23.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 10.7) {
																if (x[1] <= 23.4) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}

									}

								}

							}
							else {
								if (x[0] <= 13.6) {
									if (x[3] <= 1.4) {
										if (x[0] <= 11.7) {
											if (x[1] <= 22.9) {
												if (x[0] <= 11.5) {
													return 0.0f;
												}
												else {
													if (x[3] <= 1.2) {
														return 0.0f;
													}
													else {
														if (x[1] <= 22.4) {
															return 0.0f;
														}
														else {
															if (x[1] <= 22.6) {
																if (x[0] <= 11.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}
											else {
												if (x[0] <= 11.4) {
													if (x[3] <= 1.2) {
														return 0.0f;
													}
													else {
														if (x[0] <= 11.2) {
															return 0.0f;
														}
														else {
															if (x[1] <= 23.1) {
																return 0.0f;
															}
															else {
																if (x[0] <= 11.3) {
																	if (x[1] <= 23.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													if (x[3] <= 1.0) {
														if (x[1] <= 23.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 11.6) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[3] <= 1.2) {
															if (x[0] <= 11.6) {
																if (x[1] <= 23.1) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 11.5) {
																		if (x[1] <= 23.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 22.6) {
												if (x[3] <= 1.0) {
													return 0.0f;
												}
												else {
													if (x[0] <= 13.5) {
														if (x[0] <= 11.9) {
															if (x[3] <= 1.2) {
																if (x[1] <= 22.4) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 11.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 13.4) {
																return 9.0f;
															}
															else {
																if (x[1] <= 22.3) {
																	if (x[1] <= 22.2) {
																		return 0.0f;
																	}
																	else {
																		if (x[3] <= 1.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
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
												if (x[0] <= 11.9) {
													if (x[3] <= 1.0) {
														if (x[1] <= 23.1) {
															if (x[1] <= 22.9) {
																return 0.0f;
															}
															else {
																if (x[0] <= 11.8) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[0] <= 13.5) {
														return 9.0f;
													}
													else {
														if (x[1] <= 22.8) {
															if (x[3] <= 1.0) {
																return 0.0f;
															}
															else {
																if (x[1] <= 22.7) {
																	if (x[3] <= 1.2) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[0] <= 11.4) {
											if (x[3] <= 1.8) {
												if (x[1] <= 22.6) {
													if (x[3] <= 1.6) {
														return 0.0f;
													}
													else {
														if (x[0] <= 11.3) {
															if (x[1] <= 22.4) {
																return 0.0f;
															}
															else {
																if (x[0] <= 11.2) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[1] <= 23.1) {
														if (x[3] <= 1.6) {
															if (x[0] <= 11.3) {
																if (x[1] <= 22.9) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 11.2) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											if (x[0] <= 13.5) {
												if (x[0] <= 11.5) {
													if (x[1] <= 22.4) {
														if (x[3] <= 1.6) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												if (x[1] <= 22.5) {
													if (x[1] <= 22.3) {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[1] <= 22.2) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[3] <= 1.8) {
															if (x[1] <= 22.4) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}

								}
								else {
									if (x[0] <= 15.1) {
										if (x[3] <= 1.6) {
											if (x[0] <= 13.8) {
												if (x[1] <= 23.0) {
													if (x[1] <= 22.9) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.4) {
															return 0.0f;
														}
														else {
															if (x[0] <= 13.7) {
																return 9.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 13.7) {
														if (x[1] <= 23.2) {
															if (x[3] <= 1.2) {
																if (x[1] <= 23.1) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[1] <= 23.3) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.2) {
																if (x[1] <= 23.5) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[1] <= 23.4) {
																	if (x[3] <= 1.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[0] <= 14.9) {
													return 0.0f;
												}
												else {
													if (x[1] <= 23.3) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.4) {
															return 0.0f;
														}
														else {
															if (x[1] <= 23.4) {
																if (x[0] <= 15.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= 22.8) {
												if (x[0] <= 14.7) {
													if (x[0] <= 13.7) {
														if (x[1] <= 22.6) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.8) {
																return 0.0f;
															}
															else {
																if (x[1] <= 22.7) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 14.6) {
															return 0.0f;
														}
														else {
															if (x[1] <= 22.7) {
																return 0.0f;
															}
															else {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													if (x[3] <= 2.0) {
														if (x[1] <= 22.5) {
															return 0.0f;
														}
														else {
															if (x[0] <= 14.9) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.8) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 22.6) {
																		if (x[0] <= 15.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 22.5) {
															if (x[0] <= 14.9) {
																if (x[1] <= 22.4) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 14.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[1] <= 22.2) {
																	if (x[0] <= 15.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}
											else {
												if (x[0] <= 14.7) {
													if (x[0] <= 13.8) {
														if (x[0] <= 13.7) {
															return 9.0f;
														}
														else {
															if (x[1] <= 23.2) {
																if (x[1] <= 23.0) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.8) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 23.1) {
																			if (x[3] <= 2.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[3] <= 1.8) {
															if (x[0] <= 14.6) {
																return 0.0f;
															}
															else {
																if (x[1] <= 23.5) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 14.3) {
																if (x[1] <= 23.3) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 2.0) {
																		if (x[0] <= 13.9) {
																			if (x[1] <= 23.5) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[0] <= 14.1) {
																			if (x[0] <= 13.9) {
																				if (x[1] <= 23.4) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 0.0f;
																			}

																		}
																		else {
																			if (x[1] <= 23.4) {
																				if (x[0] <= 14.2) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[1] <= 23.1) {
																	if (x[3] <= 2.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 14.5) {
																			if (x[1] <= 23.0) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 14.4) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[3] <= 2.0) {
																		if (x[0] <= 14.5) {
																			if (x[1] <= 23.4) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 14.4) {
																					if (x[1] <= 23.5) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}
																		else {
																			if (x[1] <= 23.2) {
																				if (x[0] <= 14.6) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}

												}
												else {
													if (x[3] <= 1.8) {
														if (x[1] <= 23.3) {
															if (x[0] <= 14.9) {
																if (x[1] <= 23.2) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 14.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[1] <= 23.0) {
																	if (x[0] <= 15.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 22.9) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														if (x[1] <= 22.9) {
															if (x[0] <= 14.8) {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[3] <= 1.4) {
											if (x[1] <= 22.9) {
												if (x[3] <= 1.2) {
													return 0.0f;
												}
												else {
													if (x[0] <= 15.6) {
														return 0.0f;
													}
													else {
														if (x[1] <= 22.5) {
															return 0.0f;
														}
														else {
															if (x[0] <= 15.7) {
																if (x[1] <= 22.8) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																if (x[1] <= 22.6) {
																	if (x[0] <= 15.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[0] <= 15.5) {
													if (x[3] <= 1.2) {
														if (x[1] <= 23.5) {
															return 0.0f;
														}
														else {
															if (x[0] <= 15.4) {
																return 0.0f;
															}
															else {
																if (x[3] <= 1.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 23.2) {
															if (x[0] <= 15.4) {
																return 0.0f;
															}
															else {
																if (x[1] <= 23.1) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[0] <= 15.3) {
																if (x[1] <= 23.4) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 15.2) {
																		if (x[1] <= 23.5) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[3] <= 1.0) {
														if (x[1] <= 23.3) {
															return 0.0f;
														}
														else {
															if (x[0] <= 15.7) {
																return 0.0f;
															}
															else {
																if (x[1] <= 23.4) {
																	if (x[0] <= 15.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[3] <= 1.2) {
															if (x[1] <= 23.3) {
																if (x[0] <= 15.7) {
																	if (x[1] <= 23.2) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 15.6) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= 23.0) {
																		if (x[0] <= 15.8) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 22.7) {
												if (x[3] <= 1.8) {
													if (x[0] <= 15.5) {
														if (x[3] <= 1.6) {
															return 0.0f;
														}
														else {
															if (x[1] <= 22.3) {
																return 0.0f;
															}
															else {
																if (x[0] <= 15.3) {
																	if (x[1] <= 22.6) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 15.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= 22.4) {
																		if (x[0] <= 15.4) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[3] <= 1.6) {
															if (x[1] <= 22.5) {
																if (x[0] <= 15.7) {
																	if (x[1] <= 22.4) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 15.6) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[1] <= 22.2) {
																		if (x[0] <= 15.8) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[0] <= 15.3) {
														if (x[1] <= 22.3) {
															if (x[3] <= 2.0) {
																if (x[0] <= 15.2) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 22.2) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[3] <= 1.6) {
													if (x[0] <= 15.4) {
														if (x[1] <= 23.1) {
															if (x[0] <= 15.3) {
																if (x[1] <= 23.0) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 15.2) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[1] <= 22.8) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}

								}

							}

						}

					}
					else {
						if (x[3] <= 1.2) {
							if (x[1] <= 22.7) {
								if (x[3] <= 1.0) {
									if (x[1] <= 22.6) {
										return 0.0f;
									}
									else {
										if (x[0] <= 17.9) {
											return 0.0f;
										}
										else {
											return 9.0f;
										}

									}

								}
								else {
									if (x[0] <= 17.5) {
										if (x[0] <= 16.9) {
											return 0.0f;
										}
										else {
											if (x[1] <= 22.4) {
												return 0.0f;
											}
											else {
												if (x[0] <= 17.3) {
													if (x[1] <= 22.5) {
														return 0.0f;
													}
													else {
														if (x[0] <= 17.1) {
															if (x[1] <= 22.6) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}
									else {
										if (x[0] <= 17.9) {
											if (x[1] <= 22.3) {
												if (x[0] <= 17.7) {
													return 0.0f;
												}
												else {
													if (x[1] <= 22.2) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											return 9.0f;
										}

									}

								}

							}
							else {
								if (x[0] <= 17.7) {
									if (x[1] <= 23.1) {
										if (x[3] <= 1.0) {
											if (x[0] <= 17.1) {
												return 0.0f;
											}
											else {
												if (x[1] <= 22.9) {
													if (x[0] <= 17.5) {
														return 0.0f;
													}
													else {
														if (x[1] <= 22.8) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[0] <= 17.3) {
														if (x[1] <= 23.0) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											return 9.0f;
										}

									}
									else {
										return 9.0f;
									}

								}
								else {
									return 9.0f;
								}

							}

						}
						else {
							if (x[1] <= 22.3) {
								if (x[3] <= 1.4) {
									if (x[0] <= 16.9) {
										if (x[0] <= 16.7) {
											return 0.0f;
										}
										else {
											if (x[1] <= 22.2) {
												return 0.0f;
											}
											else {
												return 9.0f;
											}

										}

									}
									else {
										return 9.0f;
									}

								}
								else {
									return 9.0f;
								}

							}
							else {
								return 9.0f;
							}

						}

					}

				}
				else {
					if (x[0] <= 8.0) {
						if (x[1] <= 24.1) {
							if (x[3] <= 1.2) {
								if (x[0] <= 3.2) {
									if (x[0] <= 1.9) {
										return 9.0f;
									}
									else {
										if (x[3] <= 1.0) {
											if (x[0] <= 3.0) {
												if (x[0] <= 2.0) {
													if (x[1] <= 23.9) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[1] <= 23.8) {
													return 0.0f;
												}
												else {
													if (x[1] <= 23.9) {
														if (x[0] <= 3.1) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 23.9) {
												if (x[0] <= 2.8) {
													if (x[0] <= 2.0) {
														if (x[1] <= 23.7) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[0] <= 2.9) {
														if (x[1] <= 23.7) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												return 9.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 7.9) {
										return 9.0f;
									}
									else {
										if (x[1] <= 23.9) {
											if (x[3] <= 1.0) {
												return 0.0f;
											}
											else {
												if (x[1] <= 23.7) {
													return 0.0f;
												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											return 9.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 23.7) {
									if (x[3] <= 1.4) {
										if (x[0] <= 2.6) {
											if (x[0] <= 2.0) {
												return 9.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 9.0f;
										}

									}
									else {
										return 9.0f;
									}

								}
								else {
									return 9.0f;
								}

							}

						}
						else {
							return 9.0f;
						}

					}
					else {
						if (x[0] <= 11.1) {
							if (x[0] <= 9.4) {
								if (x[1] <= 24.1) {
									if (x[3] <= 1.2) {
										if (x[1] <= 23.9) {
											return 0.0f;
										}
										else {
											if (x[3] <= 1.0) {
												return 0.0f;
											}
											else {
												if (x[0] <= 9.3) {
													return 9.0f;
												}
												else {
													if (x[1] <= 24.0) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}

										}

									}
									else {
										if (x[0] <= 9.2) {
											if (x[1] <= 23.7) {
												if (x[3] <= 1.4) {
													return 0.0f;
												}
												else {
													return 9.0f;
												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											if (x[1] <= 23.8) {
												return 0.0f;
											}
											else {
												if (x[0] <= 9.3) {
													return 9.0f;
												}
												else {
													if (x[1] <= 24.0) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}

										}

									}

								}
								else {
									return 9.0f;
								}

							}
							else {
								if (x[1] <= 24.6) {
									if (x[0] <= 10.5) {
										if (x[1] <= 24.2) {
											if (x[3] <= 1.8) {
												return 0.0f;
											}
											else {
												if (x[0] <= 10.2) {
													if (x[0] <= 10.1) {
														return 0.0f;
													}
													else {
														if (x[1] <= 24.1) {
															return 0.0f;
														}
														else {
															if (x[3] <= 2.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[3] <= 2.0) {
														if (x[1] <= 23.9) {
															return 0.0f;
														}
														else {
															if (x[0] <= 10.4) {
																if (x[1] <= 24.1) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 10.3) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 10.3) {
															if (x[1] <= 23.9) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}
										else {
											if (x[0] <= 9.6) {
												if (x[0] <= 9.5) {
													return 9.0f;
												}
												else {
													if (x[1] <= 24.4) {
														return 0.0f;
													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[3] <= 1.8) {
													if (x[0] <= 10.4) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.6) {
															return 0.0f;
														}
														else {
															if (x[1] <= 24.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 10.2) {
														if (x[3] <= 2.0) {
															return 0.0f;
														}
														else {
															if (x[0] <= 9.9) {
																return 0.0f;
															}
															else {
																if (x[0] <= 10.1) {
																	if (x[1] <= 24.4) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 10.0) {
																			if (x[1] <= 24.5) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 10.3) {
															if (x[1] <= 24.4) {
																if (x[3] <= 2.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[3] <= 1.4) {
											if (x[0] <= 10.8) {
												return 0.0f;
											}
											else {
												if (x[3] <= 1.2) {
													if (x[1] <= 24.4) {
														return 0.0f;
													}
													else {
														if (x[0] <= 11.0) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 23.9) {
														return 0.0f;
													}
													else {
														if (x[0] <= 11.0) {
															if (x[1] <= 24.1) {
																return 0.0f;
															}
															else {
																if (x[0] <= 10.9) {
																	if (x[1] <= 24.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}

											}

										}
										else {
											if (x[3] <= 1.8) {
												if (x[0] <= 10.7) {
													if (x[1] <= 23.9) {
														return 0.0f;
													}
													else {
														if (x[3] <= 1.6) {
															if (x[1] <= 24.4) {
																return 0.0f;
															}
															else {
																if (x[0] <= 10.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															if (x[1] <= 24.1) {
																if (x[0] <= 10.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[0] <= 10.9) {
														if (x[1] <= 24.1) {
															if (x[3] <= 1.6) {
																if (x[1] <= 23.9) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 10.8) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												return 9.0f;
											}

										}

									}

								}
								else {
									if (x[0] <= 9.8) {
										return 9.0f;
									}
									else {
										if (x[1] <= 25.125) {
											if (x[3] <= 1.4) {
												if (x[0] <= 10.7) {
													if (x[0] <= 10.0) {
														if (x[1] <= 24.8) {
															return 0.0f;
														}
														else {
															if (x[0] <= 9.9) {
																return 9.0f;
															}
															else {
																if (x[1] <= 25.0) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 10.6) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.2) {
																return 0.0f;
															}
															else {
																if (x[1] <= 24.9) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}

													}

												}
												else {
													if (x[3] <= 1.2) {
														if (x[0] <= 10.9) {
															if (x[1] <= 24.9) {
																return 0.0f;
															}
															else {
																if (x[0] <= 10.8) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[3] <= 1.0) {
																if (x[1] <= 24.9) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 11.0) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[0] <= 10.5) {
													if (x[3] <= 1.8) {
														if (x[0] <= 10.3) {
															if (x[1] <= 24.8) {
																return 0.0f;
															}
															else {
																if (x[0] <= 9.9) {
																	return 9.0f;
																}
																else {
																	if (x[1] <= 24.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 10.0) {
																			if (x[1] <= 25.0) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			if (x[0] <= 10.2) {
																				return 0.0f;
																			}
																			else {
																				if (x[3] <= 1.6) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}

																		}

																	}

																}

															}

														}
														else {
															if (x[3] <= 1.6) {
																if (x[1] <= 24.9) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 10.4) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														if (x[0] <= 10.1) {
															if (x[3] <= 2.0) {
																if (x[1] <= 24.8) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 9.9) {
																		return 9.0f;
																	}
																	else {
																		if (x[1] <= 24.9) {
																			return 0.0f;
																		}
																		else {
																			if (x[0] <= 10.0) {
																				if (x[1] <= 25.0) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[1] <= 24.7) {
																	if (x[0] <= 9.9) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											return 9.0f;
										}

									}

								}

							}

						}
						else {
							if (x[0] <= 15.5) {
								if (x[0] <= 13.8) {
									if (x[0] <= 11.5) {
										if (x[3] <= 1.2) {
											if (x[1] <= 24.1) {
												if (x[0] <= 11.3) {
													if (x[1] <= 23.9) {
														return 0.0f;
													}
													else {
														if (x[0] <= 11.2) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.0) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[3] <= 1.0) {
														if (x[1] <= 23.9) {
															return 0.0f;
														}
														else {
															if (x[0] <= 11.4) {
																return 0.0f;
															}
															else {
																return 9.0f;
															}

														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[1] <= 24.6) {
													if (x[0] <= 11.3) {
														if (x[3] <= 1.0) {
															if (x[1] <= 24.4) {
																return 0.0f;
															}
															else {
																if (x[0] <= 11.2) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}

										}
										else {
											return 9.0f;
										}

									}
									else {
										return 9.0f;
									}

								}
								else {
									if (x[1] <= 24.5) {
										if (x[3] <= 1.4) {
											if (x[0] <= 15.0) {
												if (x[0] <= 13.9) {
													if (x[1] <= 24.0) {
														if (x[1] <= 23.8) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.0) {
																return 0.0f;
															}
															else {
																if (x[1] <= 23.9) {
																	if (x[3] <= 1.2) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													if (x[1] <= 24.2) {
														if (x[0] <= 14.7) {
															return 0.0f;
														}
														else {
															if (x[3] <= 1.2) {
																return 0.0f;
															}
															else {
																if (x[1] <= 24.0) {
																	if (x[0] <= 14.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 23.8) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	if (x[0] <= 14.8) {
																		if (x[1] <= 24.1) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[3] <= 1.2) {
															if (x[0] <= 14.0) {
																if (x[1] <= 24.3) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 24.4) {
																		if (x[3] <= 1.0) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}
															else {
																if (x[0] <= 14.8) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[0] <= 14.9) {
																			if (x[1] <= 24.4) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[1] <= 24.4) {
																if (x[0] <= 14.7) {
																	if (x[0] <= 14.0) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 14.6) {
																			return 0.0f;
																		}
																		else {
																			if (x[1] <= 24.3) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}

											}
											else {
												if (x[3] <= 1.0) {
													if (x[1] <= 23.9) {
														return 0.0f;
													}
													else {
														if (x[0] <= 15.3) {
															if (x[1] <= 24.2) {
																return 0.0f;
															}
															else {
																if (x[0] <= 15.1) {
																	return 0.0f;
																}
																else {
																	if (x[1] <= 24.3) {
																		if (x[0] <= 15.2) {
																			return 0.0f;
																		}
																		else {
																			return 9.0f;
																		}

																	}
																	else {
																		return 9.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 24.0) {
																if (x[0] <= 15.4) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 24.1) {
														if (x[0] <= 15.3) {
															if (x[3] <= 1.2) {
																if (x[1] <= 23.8) {
																	return 0.0f;
																}
																else {
																	if (x[0] <= 15.1) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 23.9) {
																			if (x[0] <= 15.2) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= 23.7) {
																	if (x[0] <= 15.1) {
																		return 0.0f;
																	}
																	else {
																		return 9.0f;
																	}

																}
																else {
																	return 9.0f;
																}

															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}

										}
										else {
											if (x[0] <= 14.7) {
												if (x[1] <= 24.2) {
													if (x[3] <= 1.8) {
														if (x[0] <= 13.9) {
															if (x[1] <= 23.7) {
																if (x[3] <= 1.6) {
																	return 0.0f;
																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															if (x[0] <= 14.5) {
																if (x[1] <= 23.8) {
																	return 0.0f;
																}
																else {
																	if (x[3] <= 1.6) {
																		if (x[0] <= 14.0) {
																			if (x[1] <= 24.1) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}
																	else {
																		if (x[0] <= 14.3) {
																			if (x[1] <= 24.0) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 14.0) {
																					return 9.0f;
																				}
																				else {
																					if (x[0] <= 14.2) {
																						return 0.0f;
																					}
																					else {
																						if (x[1] <= 24.1) {
																							return 0.0f;
																						}
																						else {
																							return 9.0f;
																						}

																					}

																				}

																			}

																		}
																		else {
																			if (x[1] <= 23.9) {
																				if (x[0] <= 14.4) {
																					return 0.0f;
																				}
																				else {
																					return 9.0f;
																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[3] <= 1.6) {
																	if (x[1] <= 23.9) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 24.0) {
																			if (x[0] <= 14.6) {
																				return 0.0f;
																			}
																			else {
																				return 9.0f;
																			}

																		}
																		else {
																			return 9.0f;
																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}

														}

													}
													else {
														if (x[0] <= 14.3) {
															if (x[1] <= 24.0) {
																if (x[3] <= 2.0) {
																	if (x[0] <= 13.9) {
																		return 9.0f;
																	}
																	else {
																		if (x[0] <= 14.1) {
																			if (x[1] <= 23.9) {
																				return 0.0f;
																			}
																			else {
																				if (x[0] <= 14.0) {
																					return 9.0f;
																				}
																				else {
																					return 0.0f;
																				}

																			}

																		}
																		else {
																			if (x[1] <= 23.8) {
																				if (x[0] <= 14.2) {
																					return 0.0f;
																				}
																				else {
																					if (x[1] <= 23.7) {
																						return 0.0f;
																					}
																					else {
																						return 9.0f;
																					}

																				}

																			}
																			else {
																				return 9.0f;
																			}

																		}

																	}

																}
																else {
																	return 9.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}

												}
												else {
													if (x[3] <= 1.6) {
														if (x[1] <= 24.3) {
															if (x[0] <= 14.4) {
																if (x[0] <= 14.0) {
																	return 9.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 9.0f;
															}

														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}

											}
											else {
												if (x[1] <= 23.7) {
													if (x[0] <= 14.8) {
														if (x[3] <= 1.6) {
															return 0.0f;
														}
														else {
															return 9.0f;
														}

													}
													else {
														return 9.0f;
													}

												}
												else {
													return 9.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 24.6) {
											if (x[3] <= 1.0) {
												if (x[0] <= 15.0) {
													if (x[0] <= 14.0) {
														return 9.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 9.0f;
												}

											}
											else {
												return 9.0f;
											}

										}
										else {
											return 9.0f;
										}

									}

								}

							}
							else {
								if (x[0] <= 15.6) {
									if (x[1] <= 23.7) {
										if (x[3] <= 1.0) {
											return 0.0f;
										}
										else {
											return 9.0f;
										}

									}
									else {
										return 9.0f;
									}

								}
								else {
									return 9.0f;
								}

							}

						}

					}

				}

			}

		}

	}

}