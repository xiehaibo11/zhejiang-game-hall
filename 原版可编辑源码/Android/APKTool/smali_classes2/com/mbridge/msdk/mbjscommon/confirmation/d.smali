.class public final Lcom/mbridge/msdk/mbjscommon/confirmation/d;
.super Ljava/lang/Object;
.source "NativeProgressController.java"


# instance fields
.field a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

.field private b:I

.field private c:I

.field private d:I

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:I

.field private h:I

.field private i:Lcom/mbridge/msdk/out/IDownloadListener;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/widget/custom/baseview/MBButton;)V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    .line 21
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/d;I)I
    .locals 0

    .line 16
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c:I

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)V
    .locals 3

    .line 3085
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    if-eqz v0, :cond_1

    .line 3087
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3088
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "mbridge_cm_progress_status_descri_default"

    const-string v2, "string"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setText(I)V

    goto :goto_0

    .line 3090
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->e:Ljava/lang/String;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)V
    .locals 4

    .line 3098
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 3099
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setIndeterminateProgressMode(Z)V

    .line 3100
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    new-instance v1, Lcom/mbridge/msdk/mbjscommon/confirmation/d$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d$2;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->post(Ljava/lang/Runnable;)Z

    .line 3106
    iget v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->d:I

    const/16 v1, 0x64

    if-ne v0, v1, :cond_0

    .line 3108
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 3109
    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_cm_progress_status_descri_ins"

    const-string v3, "string"

    invoke-static {v0, v2, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 3110
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setText(Ljava/lang/CharSequence;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 3112
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbjscommon/confirmation/d;I)V
    .locals 0

    .line 16
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->d(I)V

    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)I
    .locals 0

    .line 16
    iget p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->d:I

    return p0
.end method

.method private c()V
    .locals 1

    .line 220
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->d()I

    move-result v0

    .line 221
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->d(I)V

    return-void
.end method

.method private c(I)V
    .locals 2

    .line 53
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b:I

    .line 54
    iget v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->h:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    if-eqz p1, :cond_0

    return-void

    .line 57
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    new-instance v1, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d$1;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/d;I)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private d()I
    .locals 7

    .line 276
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    :try_start_0
    const-string v0, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 278
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 279
    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const/4 v3, 0x0

    new-array v4, v2, [Ljava/lang/Object;

    .line 280
    invoke-virtual {v1, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v3, "getTaskStatusByUniqueKey"

    const/4 v4, 0x1

    new-array v5, v4, [Ljava/lang/Class;

    .line 282
    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v2

    invoke-virtual {v0, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v3, v4, [Ljava/lang/Object;

    .line 283
    iget-object v4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    aput-object v4, v3, v2

    invoke-virtual {v0, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 291
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 289
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 287
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception v0

    .line 285
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_0
    :goto_0
    const/4 v0, -0x1

    :goto_1
    return v0
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)I
    .locals 0

    .line 16
    iget p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c:I

    return p0
.end method

.method private d(I)V
    .locals 4

    const/4 v0, -0x1

    const/4 v1, 0x0

    if-eq p1, v0, :cond_5

    const/16 v0, 0x9

    if-eq p1, v0, :cond_4

    const/4 v0, 0x3

    const/4 v2, 0x1

    if-eq p1, v2, :cond_3

    const/4 v3, 0x2

    if-eq p1, v3, :cond_2

    if-eq p1, v0, :cond_1

    const/4 v0, 0x5

    if-eq p1, v0, :cond_0

    const/4 v0, 0x6

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 241
    :cond_0
    iput v3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b:I

    goto :goto_0

    .line 237
    :cond_1
    iput v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b:I

    goto :goto_0

    .line 234
    :cond_2
    iput v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b:I

    goto :goto_0

    .line 231
    :cond_3
    iput v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b:I

    goto :goto_0

    :cond_4
    const/4 p1, 0x4

    .line 244
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b:I

    goto :goto_0

    .line 228
    :cond_5
    iput v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b:I

    .line 247
    :goto_0
    iget p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b:I

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c(I)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 9

    .line 211
    iget v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->g:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    .line 212
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c()V

    .line 213
    iget v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 2251
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 2253
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    .line 2254
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/e;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/e;

    move-result-object v0

    .line 2255
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/db/e;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 2256
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const-string v3, "getInstance"

    const/4 v4, 0x0

    new-array v5, v4, [Ljava/lang/Class;

    .line 2257
    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    const/4 v5, 0x0

    new-array v6, v4, [Ljava/lang/Object;

    .line 2258
    invoke-virtual {v3, v5, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    const-string v5, "start"

    new-array v6, v1, [Ljava/lang/Class;

    .line 2260
    const-class v7, Ljava/lang/String;

    aput-object v7, v6, v4

    const-class v7, Ljava/lang/String;

    const/4 v8, 0x1

    aput-object v7, v6, v8

    invoke-virtual {v2, v5, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v1, v1, [Ljava/lang/Object;

    .line 2261
    iget-object v5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    aput-object v5, v1, v4

    aput-object v0, v1, v8

    invoke-virtual {v2, v3, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2269
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 2267
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 2265
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception v0

    .line 2263
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 42
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->d:I

    .line 44
    iget p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    .line 45
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c(I)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 169
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    .line 170
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c()V

    return-void
.end method

.method public final b()V
    .locals 9

    .line 348
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    :try_start_0
    const-string v0, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 350
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 351
    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v3, v2, [Ljava/lang/Object;

    const/4 v4, 0x0

    .line 352
    invoke-virtual {v1, v4, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v3, "deleteDownloadListener"

    const/4 v5, 0x2

    new-array v6, v5, [Ljava/lang/Class;

    .line 354
    const-class v7, Ljava/lang/String;

    aput-object v7, v6, v2

    const-class v7, Lcom/mbridge/msdk/out/IDownloadListener;

    const/4 v8, 0x1

    aput-object v7, v6, v8

    invoke-virtual {v0, v3, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v3, v5, [Ljava/lang/Object;

    .line 355
    iget-object v5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    aput-object v5, v3, v2

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->i:Lcom/mbridge/msdk/out/IDownloadListener;

    aput-object v2, v3, v8

    invoke-virtual {v0, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 356
    iput-object v4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->i:Lcom/mbridge/msdk/out/IDownloadListener;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 364
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 362
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 360
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception v0

    .line 358
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 165
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->g:I

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 7

    .line 175
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "ctaldtype"

    .line 176
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "1"

    .line 177
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    const/4 p1, 0x1

    .line 178
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->h:I

    .line 179
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 180
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    const/16 v2, 0x32

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setProgress(I)V

    .line 1298
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->i:Lcom/mbridge/msdk/out/IDownloadListener;

    if-nez v1, :cond_1

    .line 1299
    new-instance v1, Lcom/mbridge/msdk/mbjscommon/confirmation/d$3;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d$3;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)V

    iput-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->i:Lcom/mbridge/msdk/out/IDownloadListener;

    .line 1327
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    :try_start_0
    const-string v1, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 1329
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getInstance"

    new-array v3, v0, [Ljava/lang/Class;

    .line 1330
    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    const/4 v3, 0x0

    new-array v4, v0, [Ljava/lang/Object;

    .line 1331
    invoke-virtual {v2, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    const-string v3, "addDownloadListener"

    const/4 v4, 0x2

    new-array v5, v4, [Ljava/lang/Class;

    .line 1333
    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v0

    const-class v6, Lcom/mbridge/msdk/out/IDownloadListener;

    aput-object v6, v5, p1

    invoke-virtual {v1, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v3, v4, [Ljava/lang/Object;

    .line 1334
    iget-object v4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->f:Ljava/lang/String;

    aput-object v4, v3, v0

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->i:Lcom/mbridge/msdk/out/IDownloadListener;

    aput-object v0, v3, p1

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1342
    invoke-virtual {p1}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception p1

    .line 1340
    invoke-virtual {p1}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception p1

    .line 1338
    invoke-virtual {p1}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception p1

    .line 1336
    invoke-virtual {p1}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    goto :goto_0

    .line 184
    :cond_2
    iput v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->h:I

    :cond_3
    :goto_0
    return-void
.end method
