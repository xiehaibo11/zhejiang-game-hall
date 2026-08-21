.class Lcom/tencent/open/b/h$3;
.super Ljava/lang/Object;
.source "ProGuard"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tencent/open/b/h;->d()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tencent/open/b/h;


# direct methods
.method constructor <init>(Lcom/tencent/open/b/h;)V
    .locals 0

    .line 629
    iput-object p1, p0, Lcom/tencent/open/b/h$3;->a:Lcom/tencent/open/b/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 27

    move-object/from16 v1, p0

    const-string v2, "openSDK_LOG.ReportManager"

    .line 634
    :try_start_0
    iget-object v0, v1, Lcom/tencent/open/b/h$3;->a:Lcom/tencent/open/b/h;

    invoke-virtual {v0}, Lcom/tencent/open/b/h;->c()Ljava/util/Map;

    move-result-object v3

    if-nez v3, :cond_0

    return-void

    .line 638
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "-->doReportVia, params: "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/tencent/open/log/SLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 641
    invoke-static {}, Lcom/tencent/open/b/f;->a()I

    move-result v4

    .line 645
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_8

    const/4 v0, 0x0

    const/4 v8, 0x0

    :cond_1
    const/4 v9, 0x1

    add-int/lit8 v10, v0, 0x1

    .line 653
    :try_start_1
    invoke-static {}, Lcom/tencent/open/a/f;->a()Lcom/tencent/open/a/f;

    move-result-object v13

    const-string v14, "https://appsupport.qq.com/cgi-bin/appstage/mstats_batch_report"

    invoke-virtual {v13, v14, v3}, Lcom/tencent/open/a/f;->b(Ljava/lang/String;Ljava/util/Map;)Lcom/tencent/open/a/g;

    move-result-object v13

    .line 655
    invoke-interface {v13}, Lcom/tencent/open/a/g;->d()I

    move-result v14

    .line 656
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "-->reportVia: statusCode "

    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 658
    invoke-interface {v13}, Lcom/tencent/open/a/g;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tencent/open/utils/m;->d(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    .line 659
    invoke-interface {v13}, Lcom/tencent/open/a/g;->c()I

    move-result v14

    int-to-long v14, v14

    .line 660
    invoke-interface {v13}, Lcom/tencent/open/a/g;->b()I

    move-result v7
    :try_end_1
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_6
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_4
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    move/from16 v17, v10

    int-to-long v9, v7

    .line 662
    :try_start_2
    invoke-interface {v13}, Lcom/tencent/open/a/g;->d()I

    move-result v7

    const/16 v11, 0xc8

    if-eq v7, v11, :cond_2

    .line 663
    invoke-interface {v13}, Lcom/tencent/open/a/g;->d()I

    move-result v8
    :try_end_2
    .catch Ljava/net/SocketTimeoutException; {:try_start_2 .. :try_end_2} :catch_7
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_1
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    move-wide/from16 v18, v5

    move-wide/from16 v22, v9

    move-wide/from16 v20, v14

    goto :goto_6

    :cond_2
    :try_start_3
    const-string v7, "ret"

    .line 669
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_0
    .catch Ljava/net/SocketTimeoutException; {:try_start_3 .. :try_end_3} :catch_7
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_0

    :catch_0
    const/4 v0, -0x4

    :goto_0
    if-eqz v0, :cond_4

    const-wide/16 v11, 0x0

    cmp-long v0, v9, v11

    if-eqz v0, :cond_3

    goto :goto_1

    :cond_3
    move-wide v11, v14

    goto :goto_4

    :cond_4
    :goto_1
    move-wide/from16 v18, v5

    move-wide/from16 v22, v9

    move-wide/from16 v20, v14

    const/4 v7, 0x1

    goto :goto_7

    :catch_1
    move-exception v0

    goto :goto_2

    :catch_2
    const-wide/16 v11, 0x0

    const/4 v8, -0x6

    move v0, v4

    move-wide v9, v11

    goto :goto_5

    :catch_3
    move-exception v0

    move/from16 v17, v10

    :goto_2
    const-wide/16 v11, 0x0

    .line 691
    :try_start_4
    invoke-static {v0}, Lcom/tencent/open/utils/HttpUtils;->getErrorCodeFromException(Ljava/io/IOException;)I

    move-result v8

    goto :goto_3

    :catch_4
    move/from16 v17, v10

    :catch_5
    const-wide/16 v11, 0x0

    move-wide v9, v11

    move/from16 v0, v17

    const/4 v8, -0x4

    goto :goto_5

    :catch_6
    move/from16 v17, v10

    :catch_7
    const-wide/16 v11, 0x0

    .line 680
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    const/4 v8, -0x8

    :goto_3
    move-wide v9, v11

    :goto_4
    move/from16 v0, v17

    :goto_5
    if-lt v0, v4, :cond_1

    move-wide/from16 v18, v5

    move-wide/from16 v22, v9

    move-wide/from16 v20, v11

    :goto_6
    const/4 v7, 0x0

    .line 700
    :goto_7
    iget-object v0, v1, Lcom/tencent/open/b/h$3;->a:Lcom/tencent/open/b/h;

    const-string v17, "mapp_apptrace_sdk"

    const/16 v25, 0x0

    const/16 v26, 0x0

    move-object/from16 v16, v0

    move/from16 v24, v8

    invoke-virtual/range {v16 .. v26}, Lcom/tencent/open/b/h;->a(Ljava/lang/String;JJJILjava/lang/String;Z)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_8

    const-string v0, "report_via"

    if-eqz v7, :cond_5

    .line 702
    :try_start_5
    invoke-static {v0}, Lcom/tencent/open/b/g;->a(Ljava/lang/String;)V

    goto :goto_8

    .line 704
    :cond_5
    iget-object v3, v1, Lcom/tencent/open/b/h$3;->a:Lcom/tencent/open/b/h;

    iget-object v3, v3, Lcom/tencent/open/b/h;->d:Ljava/util/List;

    invoke-static {v0, v3}, Lcom/tencent/open/b/g;->a(Ljava/lang/String;Ljava/util/List;)V

    .line 708
    :goto_8
    iget-object v0, v1, Lcom/tencent/open/b/h$3;->a:Lcom/tencent/open/b/h;

    iget-object v0, v0, Lcom/tencent/open/b/h;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 709
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "-->doReportVia, uploadSuccess: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " resultCode: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_8

    goto :goto_9

    :catch_8
    move-exception v0

    const-string v3, "-->doReportVia, exception in serial executor."

    .line 711
    invoke-static {v2, v3, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_9
    return-void
.end method
