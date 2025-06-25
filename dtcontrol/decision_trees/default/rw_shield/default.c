#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.0025f,0.0025f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 0.91) {
		if (x[0] <= 1.0) {
			if (x[1] <= 0.21) {
				if (x[0] <= 0.035) {
					if (x[1] <= 0.12) {
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
				if (x[0] <= 0.09) {
					if (x[1] <= 0.28) {
						return 1.0f;
					}
					else {
						return 0.0f;
					}

				}
				else {
					if (x[1] <= 0.3) {
						if (x[0] <= 0.16) {
							return 1.0f;
						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 0.22) {
							if (x[1] <= 0.37) {
								return 1.0f;
							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[1] <= 0.39) {
								if (x[0] <= 0.29) {
									return 1.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[0] <= 0.35) {
									if (x[1] <= 0.46) {
										return 1.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[1] <= 0.48) {
										if (x[0] <= 0.42) {
											return 1.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[0] <= 0.48) {
											if (x[1] <= 0.55) {
												return 1.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[1] <= 0.57) {
												if (x[0] <= 0.55) {
													return 1.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[0] <= 0.61) {
													if (x[1] <= 0.64) {
														return 1.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[1] <= 0.66) {
														if (x[0] <= 0.68) {
															return 1.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[0] <= 0.74) {
															if (x[1] <= 0.73) {
																return 1.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[1] <= 0.75) {
																if (x[0] <= 0.81) {
																	return 1.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[1] <= 0.82) {
																	if (x[0] <= 0.94) {
																		return 1.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[0] <= 0.87) {
																		return 0.0f;
																	}
																	else {
																		if (x[1] <= 0.84) {
																			if (x[0] <= 0.94) {
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
			return 0.0f;
		}

	}
	else {
		return 0.0f;
	}

}