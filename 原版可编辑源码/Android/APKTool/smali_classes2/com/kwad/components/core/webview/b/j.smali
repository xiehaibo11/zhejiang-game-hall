.class public final Lcom/kwad/components/core/webview/b/j;
.super Ljava/lang/Object;


# direct methods
.method public static b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 3

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v1

    sparse-switch v1, :sswitch_data_0

    goto/16 :goto_0

    :sswitch_0
    const-string v1, "ksad-video-interact-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x7

    goto/16 :goto_1

    :sswitch_1
    const-string v1, "ksad-video-confirm-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x3

    goto/16 :goto_1

    :sswitch_2
    const-string v1, "ksad-video-playend-dialog-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x4

    goto/16 :goto_1

    :sswitch_3
    const-string v1, "ksad-video-web-close-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0x9

    goto/16 :goto_1

    :sswitch_4
    const-string v1, "ksad-video-secondclick-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x5

    goto/16 :goto_1

    :sswitch_5
    const-string v1, "ksad-push-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0xf

    goto/16 :goto_1

    :sswitch_6
    const-string v1, "ksad-image-video-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0x11

    goto/16 :goto_1

    :sswitch_7
    const-string v1, "ksad-video-middle-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    goto/16 :goto_1

    :sswitch_8
    const-string v1, "ksad-interstitial-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x6

    goto/16 :goto_1

    :sswitch_9
    const-string v1, "ksad-video-topfloor"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0xd

    goto/16 :goto_1

    :sswitch_a
    const-string v1, "ksad-live-video-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0x13

    goto/16 :goto_1

    :sswitch_b
    const-string v1, "ksad-splash-end-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0xc

    goto :goto_1

    :sswitch_c
    const-string v1, "ksad-pre-landingpage-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0x10

    goto :goto_1

    :sswitch_d
    const-string v1, "ksad-neo-video-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0xe

    goto :goto_1

    :sswitch_e
    const-string v1, "ksad-splash-play-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0xb

    goto :goto_1

    :sswitch_f
    const-string v1, "ksad-video-bottom-card-v2"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x2

    goto :goto_1

    :sswitch_10
    const-string v1, "ksad-installed-activate-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0x12

    goto :goto_1

    :sswitch_11
    const-string v1, "ksad-video-task-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0x8

    goto :goto_1

    :sswitch_12
    const-string v1, "ksad-fullscreen-video-card"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0xa

    goto :goto_1

    :sswitch_13
    const-string v1, "ksad-video-top-bar"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    goto :goto_1

    :cond_0
    :goto_0
    const/4 v1, -0x1

    :goto_1
    const-string v2, ""

    packed-switch v1, :pswitch_data_0

    goto :goto_3

    :pswitch_0
    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->videoLiveTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_1
    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->installedActivateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InstalledActivateInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InstalledActivateInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_2
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->videoImageTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    goto :goto_2

    :pswitch_3
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->preLandingPageTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_4
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->pushTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PushTKInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PushTKInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_5
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->neoTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    goto :goto_2

    :pswitch_6
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->topFloorTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TopFloorTKInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TopFloorTKInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_7
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashEndCardTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_8
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashPlayCardTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashPlayCardTKInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashPlayCardTKInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_9
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->fullScreenInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_a
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->mRewardWebTaskCloseInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardWebTaskCloseInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardWebTaskCloseInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_b
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoTaskInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_c
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoInteractInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_d
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->templateId:Ljava/lang/String;

    goto :goto_3

    :pswitch_e
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->activityTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    goto :goto_2

    :pswitch_f
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->playendTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    goto :goto_2

    :pswitch_10
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->confirmTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    goto :goto_2

    :pswitch_11
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->actionBarTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    goto :goto_2

    :pswitch_12
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->middleTKCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    goto :goto_2

    :pswitch_13
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->topBarTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    :goto_2
    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;->templateId:Ljava/lang/String;

    :goto_3
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->styles:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$Styles;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$Styles;->templateList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateId:Ljava/lang/String;

    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    move-object v2, p0

    :cond_2
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->RESPONE_MONITOR:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildNormalApmReporter()Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    const-string v1, "response_biz_error_tk"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->dx(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->aK(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->TACHIKOMA:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->a(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    const-string v0, "TkTemplateIdLost"

    invoke-virtual {p1, v0, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->W(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    goto :goto_4

    :cond_3
    move-object p0, v2

    :goto_4
    return-object p0

    nop

    :sswitch_data_0
    .sparse-switch
        -0x69f17279 -> :sswitch_13
        -0x5eb8e24e -> :sswitch_12
        -0x5c1a2abc -> :sswitch_11
        -0xf93c1ab -> :sswitch_10
        -0xf7a0ab5 -> :sswitch_f
        -0xc4d47db -> :sswitch_e
        0x2aa56f9 -> :sswitch_d
        0x8a2b643 -> :sswitch_c
        0x254e6b26 -> :sswitch_b
        0x27743661 -> :sswitch_a
        0x2eeb1f6b -> :sswitch_9
        0x46db434f -> :sswitch_8
        0x4fd43034 -> :sswitch_7
        0x5b1d56d6 -> :sswitch_6
        0x6084de21 -> :sswitch_5
        0x6251ab3d -> :sswitch_4
        0x6270ee72 -> :sswitch_3
        0x6f3d08bb -> :sswitch_2
        0x70d03391 -> :sswitch_1
        0x774ee533 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
