.class public final Lcom/tkay/expressad/advanced/c/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/advanced/c/c$a;
    }
.end annotation


# static fields
.field private static a:Ljava/lang/String; = "ResManager"

.field private static b:I = 0x1


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;
    .locals 4

    .line 112
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v0

    const-string v3, "<MBTPLMARK>"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 116
    :cond_0
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 117
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    goto :goto_1

    .line 113
    :cond_1
    :goto_0
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 114
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    :goto_1
    return-object p0
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 344
    :try_start_0
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 345
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_0

    .line 346
    new-instance p0, Ljava/lang/StringBuilder;

    const-string v2, "file:///"

    invoke-direct {p0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 352
    :try_start_1
    throw p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    move-exception p0

    .line 354
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 7

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move v5, p5

    .line 254
    invoke-static/range {v0 .. v6}, Lcom/tkay/expressad/advanced/c/c;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/advanced/c/c$a;)V

    return-void
.end method

.method private static a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/advanced/c/c$a;)V
    .locals 2

    if-eqz p0, :cond_1

    .line 258
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 261
    new-instance v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1, p3, p4}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    new-instance p3, Ljava/util/ArrayList;

    invoke-direct {p3}, Ljava/util/ArrayList;-><init>()V

    .line 263
    invoke-interface {p3, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 264
    invoke-virtual {v0, p3}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setCampaignList(Ljava/util/List;)V

    .line 265
    invoke-virtual {v0, p5}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setAllowSkip(I)V

    .line 266
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setAdvancedNativeJSBridgeImpl(Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;)V

    .line 267
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object p3

    .line 268
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    .line 269
    new-instance p4, Lcom/tkay/expressad/advanced/c/c$1;

    invoke-direct {p4, p2, p0, p6}, Lcom/tkay/expressad/advanced/c/c$1;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Lcom/tkay/expressad/advanced/c/c$a;)V

    invoke-virtual {p3, p4}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 323
    invoke-virtual {p3}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result p2

    if-nez p2, :cond_0

    .line 325
    new-instance p0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 326
    new-instance p2, Lcom/tkay/expressad/advanced/c/c$2;

    invoke-direct {p2, p3, p1}, Lcom/tkay/expressad/advanced/c/c$2;-><init>(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;Ljava/lang/String;)V

    invoke-virtual {p0, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 333
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    :cond_1
    return-void
.end method

.method public static a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 4

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x1

    .line 365
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 366
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->isVideoReady()Z

    move-result v1

    :cond_1
    if-eqz v1, :cond_2

    .line 369
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 370
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/advanced/a/c;->b(Ljava/lang/String;)Z

    move-result v1

    .line 371
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "======isReady getAdZip:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, "---requestId:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    if-eqz v1, :cond_3

    .line 373
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 374
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/advanced/a/c;->b(Ljava/lang/String;)Z

    move-result v1

    .line 378
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    goto :goto_0

    :cond_4
    move v0, v1

    :goto_0
    if-eqz v0, :cond_5

    .line 382
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    .line 383
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->isEndCardReady()Z

    move-result v0

    :cond_5
    return v0
.end method

.method public static a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/advanced/c/c$a;)Z
    .locals 12

    move-object v7, p0

    const/4 v8, 0x0

    const/4 v9, 0x1

    if-eqz p1, :cond_9

    .line 159
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->clearResState()V

    .line 160
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 162
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    const/16 v1, 0x12a

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v2

    move-object v10, p3

    invoke-virtual {v0, v1, p3, v2}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_0
    move-object v10, p3

    move v0, v9

    .line 167
    :goto_0
    invoke-virtual {p0, v9}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setVideoReady(Z)V

    :cond_1
    move v11, v0

    .line 170
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->isEndCardReady()Z

    move-result v0

    if-nez v0, :cond_2

    .line 171
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 172
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 173
    invoke-virtual {p0, v9}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setEndCardReady(Z)V

    .line 177
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->isH5Ready()Z

    move-result v0

    if-nez v0, :cond_5

    .line 178
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 179
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 180
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/advanced/a/c;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 181
    invoke-virtual {p0, v9}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    move v0, v8

    move v11, v9

    goto :goto_1

    :cond_3
    move-object v0, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move/from16 v5, p4

    move-object/from16 v6, p5

    .line 184
    invoke-static/range {v0 .. v6}, Lcom/tkay/expressad/advanced/c/c;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/advanced/c/c$a;)V

    move v0, v9

    goto :goto_1

    :cond_4
    move v0, v8

    move v11, v0

    goto :goto_1

    :cond_5
    move v0, v8

    .line 195
    :goto_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_8

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_8

    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->isH5Ready()Z

    move-result v1

    if-nez v1, :cond_8

    .line 196
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/advanced/c/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 197
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_a

    .line 198
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/advanced/a/c;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 199
    invoke-virtual {p0, v9}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    .line 200
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v1

    if-eqz v1, :cond_6

    .line 201
    invoke-virtual {p0, v9}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setVideoReady(Z)V

    :cond_6
    move v8, v9

    goto :goto_2

    :cond_7
    move-object v0, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move/from16 v5, p4

    move-object/from16 v6, p5

    .line 205
    invoke-static/range {v0 .. v6}, Lcom/tkay/expressad/advanced/c/c;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/advanced/c/c$a;)V

    move v0, v9

    :cond_8
    move v8, v11

    goto :goto_2

    :cond_9
    move v0, v8

    :cond_a
    :goto_2
    if-eqz v8, :cond_b

    if-nez v0, :cond_b

    .line 221
    invoke-interface/range {p5 .. p5}, Lcom/tkay/expressad/advanced/c/c$a;->a()V

    :cond_b
    return v8
.end method
