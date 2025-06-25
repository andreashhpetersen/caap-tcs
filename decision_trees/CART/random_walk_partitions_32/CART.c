#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.8373534592733792f,0.0942785131395091f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 0.909669) {
		if (x[0] <= 0.487355) {
			if (x[1] <= 0.28317) {
				if (x[0] <= 0.164173) {
					if (x[1] <= 0.118506) {
						return 0.0f;
					}
					else {
						if (x[1] <= 0.151382) {
							if (x[0] <= 0.045489) {
								return 1.0f;
							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[1] <= 0.210532) {
								if (x[0] <= 0.042666) {
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
					return 0.0f;
				}

			}
			else {
				if (x[0] <= 0.094394) {
					return 9.0f;
				}
				else {
					if (x[1] <= 0.548153) {
						if (x[0] <= 0.229491) {
							if (x[1] <= 0.370565) {
								if (x[1] <= 0.29291) {
									if (x[0] <= 0.162832) {
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
								if (x[0] <= 0.217281) {
									return 9.0f;
								}
								else {
									if (x[0] <= 0.227767) {
										return 1.0f;
									}
									else {
										return 9.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 0.480081) {
								if (x[0] <= 0.418101) {
									if (x[1] <= 0.377334) {
										if (x[0] <= 0.301576) {
											if (x[1] <= 0.300978) {
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
								if (x[0] <= 0.349987) {
									return 9.0f;
								}
								else {
									return 1.0f;
								}

							}

						}

					}
					else {
						if (x[0] <= 0.479724) {
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
			if (x[1] <= 0.480555) {
				return 0.0f;
			}
			else {
				if (x[0] <= 1.003992) {
					if (x[0] <= 0.680634) {
						if (x[1] <= 0.722071) {
							if (x[1] <= 0.552408) {
								if (x[0] <= 0.552863) {
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
							if (x[1] <= 0.730447) {
								if (x[0] <= 0.569572) {
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

					}
					else {
						if (x[1] <= 0.660083) {
							return 0.0f;
						}
						else {
							if (x[0] <= 0.836594) {
								if (x[1] <= 0.822721) {
									if (x[1] <= 0.665842) {
										if (x[0] <= 0.784334) {
											return 1.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[0] <= 0.696797) {
											if (x[0] <= 0.695054) {
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
								else {
									return 9.0f;
								}

							}
							else {
								if (x[1] <= 0.841113) {
									if (x[0] <= 0.940667) {
										if (x[1] <= 0.749312) {
											return 0.0f;
										}
										else {
											if (x[0] <= 0.855543) {
												if (x[0] <= 0.854891) {
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
									else {
										return 0.0f;
									}

								}
								else {
									if (x[0] <= 0.861977) {
										return 9.0f;
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

	}
	else {
		if (x[0] <= 1.0017) {
			return 9.0f;
		}
		else {
			if (x[1] <= 0.992378) {
				return 0.0f;
			}
			else {
				return 9.0f;
			}

		}

	}

}