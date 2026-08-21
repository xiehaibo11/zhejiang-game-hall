.class public Lcom/mbridge/msdk/widget/MBDownloadProgressBar;
.super Landroid/widget/RelativeLayout;
.source "MBDownloadProgressBar.java"


# static fields
.field public static final PROGRESS_STATUS_DEFAULT:I = 0x0

.field public static final PROGRESS_STATUS_DOING:I = 0x1

.field public static final PROGRESS_STATUS_INT:I = 0x3

.field public static final PROGRESS_STATUS_OPEN:I = 0x4

.field public static final PROGRESS_STATUS_PAUSE:I = 0x2


# instance fields
.field private a:I

.field private b:I

.field private c:I

.field private d:Landroid/widget/ProgressBar;

.field private e:Landroid/widget/ImageView;

.field private f:Landroid/widget/TextView;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:I

.field private j:I

.field private k:Lcom/mbridge/msdk/out/IDownloadListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 44
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 48
    invoke-direct {p0, p1, p2, v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 1

    .line 52
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 1058
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p2

    const-string p3, "mbridge_same_download_progress_bar_layout"

    const-string v0, "layout"

    invoke-static {p1, p3, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p3

    const/4 v0, 0x0

    invoke-virtual {p2, p3, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/view/ViewGroup;

    .line 1059
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->addView(Landroid/view/View;)V

    const-string p3, "id"

    const-string v0, "mbridge_same_download_mbprogress_progress"

    .line 1060
    invoke-static {p1, v0, p3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ProgressBar;

    iput-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->d:Landroid/widget/ProgressBar;

    const-string v0, "mbridge_same_download_mbprogress_status_icon"

    .line 1061
    invoke-static {p1, v0, p3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    const-string v0, "mbridge_same_download_mbprogress_status_desc"

    .line 1062
    invoke-static {p1, v0, p3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p2, p1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f:Landroid/widget/TextView;

    .line 54
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;I)I
    .locals 0

    .line 23
    iput p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b:I

    return p1
.end method

.method private a()V
    .locals 4

    .line 122
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    .line 123
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 125
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->d:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    .line 126
    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 128
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f:Landroid/widget/TextView;

    if-eqz v0, :cond_3

    .line 130
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 131
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "mbridge_cm_progress_status_descri_default"

    const-string v3, "string"

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    goto :goto_0

    .line 133
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_3
    :goto_0
    return-void
.end method

.method private a(I)V
    .locals 2

    .line 91
    iput p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    .line 92
    iget v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->j:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    if-eqz p1, :cond_0

    return-void

    .line 95
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;-><init>(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;I)V

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V
    .locals 0

    .line 23
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a()V

    return-void
.end method

.method private b()V
    .locals 1

    .line 249
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->d()I

    move-result v0

    .line 250
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b(I)V

    return-void
.end method

.method private b(I)V
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

    .line 270
    :cond_0
    iput v3, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    goto :goto_0

    .line 266
    :cond_1
    iput v1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    goto :goto_0

    .line 263
    :cond_2
    iput v2, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    goto :goto_0

    .line 260
    :cond_3
    iput v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    goto :goto_0

    :cond_4
    const/4 p1, 0x4

    .line 273
    iput p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    goto :goto_0

    .line 257
    :cond_5
    iput v1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    .line 276
    :goto_0
    iget p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a(I)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V
    .locals 2

    .line 2140
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    .line 2141
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 2143
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->d:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_1

    .line 2144
    iget v1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->c:I

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 2146
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f:Landroid/widget/TextView;

    if-eqz v0, :cond_2

    .line 2147
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget p0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->c:I

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, "%"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_2
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;I)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b(I)V

    return-void
.end method

.method private c()V
    .locals 9

    .line 280
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 282
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    .line 283
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/e;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/e;

    move-result-object v0

    .line 284
    iget-object v1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/e;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 285
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getInstance"

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    .line 286
    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    const/4 v4, 0x0

    new-array v5, v3, [Ljava/lang/Object;

    .line 287
    invoke-virtual {v2, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    const-string v4, "start"

    const/4 v5, 0x2

    new-array v6, v5, [Ljava/lang/Class;

    .line 289
    const-class v7, Ljava/lang/String;

    aput-object v7, v6, v3

    const-class v7, Ljava/lang/String;

    const/4 v8, 0x1

    aput-object v7, v6, v8

    invoke-virtual {v1, v4, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v4, v5, [Ljava/lang/Object;

    .line 290
    iget-object v5, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

    aput-object v5, v4, v3

    aput-object v0, v4, v8

    invoke-virtual {v1, v2, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 298
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 296
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 294
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception v0

    .line 292
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V
    .locals 3

    .line 2151
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    .line 2152
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 2154
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    .line 2155
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->getContext()Landroid/content/Context;

    move-result-object p0

    const-string v1, "mbridge_cm_progress_status_descri_pause"

    const-string v2, "string"

    invoke-static {p0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(I)V

    :cond_1
    return-void
.end method

.method private d()I
    .locals 7

    .line 305
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    :try_start_0
    const-string v0, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 307
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 308
    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const/4 v3, 0x0

    new-array v4, v2, [Ljava/lang/Object;

    .line 309
    invoke-virtual {v1, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v3, "getTaskStatusByUniqueKey"

    const/4 v4, 0x1

    new-array v5, v4, [Ljava/lang/Class;

    .line 311
    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v2

    invoke-virtual {v0, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v3, v4, [Ljava/lang/Object;

    .line 312
    iget-object v4, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

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

    .line 320
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 318
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 316
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception v0

    .line 314
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_0
    :goto_0
    const/4 v0, -0x1

    :goto_1
    return v0
.end method

.method static synthetic d(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V
    .locals 3

    .line 2160
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    .line 2161
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 2163
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->d:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_1

    const/16 v1, 0x64

    .line 2164
    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 2166
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f:Landroid/widget/TextView;

    if-eqz v0, :cond_2

    .line 2167
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->getContext()Landroid/content/Context;

    move-result-object p0

    const-string v1, "mbridge_cm_progress_status_descri_ins"

    const-string v2, "string"

    invoke-static {p0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(I)V

    :cond_2
    return-void
.end method

.method private e()V
    .locals 1

    .line 326
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->k:Lcom/mbridge/msdk/out/IDownloadListener;

    if-nez v0, :cond_0

    .line 327
    new-instance v0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$2;-><init>(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->k:Lcom/mbridge/msdk/out/IDownloadListener;

    .line 351
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f()V

    :cond_0
    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V
    .locals 3

    .line 2171
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    .line 2172
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 2174
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->d:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_1

    const/16 v1, 0x64

    .line 2175
    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 2177
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f:Landroid/widget/TextView;

    if-eqz v0, :cond_2

    .line 2178
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->getContext()Landroid/content/Context;

    move-result-object p0

    const-string v1, "mbridge_cm_progress_status_descri_open"

    const-string v2, "string"

    invoke-static {p0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(I)V

    :cond_2
    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)I
    .locals 0

    .line 23
    iget p0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b:I

    return p0
.end method

.method private f()V
    .locals 8

    .line 356
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    :try_start_0
    const-string v0, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 358
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 359
    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const/4 v3, 0x0

    new-array v4, v2, [Ljava/lang/Object;

    .line 360
    invoke-virtual {v1, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v3, "addDownloadListener"

    const/4 v4, 0x2

    new-array v5, v4, [Ljava/lang/Class;

    .line 362
    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v2

    const-class v6, Lcom/mbridge/msdk/out/IDownloadListener;

    const/4 v7, 0x1

    aput-object v6, v5, v7

    invoke-virtual {v0, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v3, v4, [Ljava/lang/Object;

    .line 363
    iget-object v4, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

    aput-object v4, v3, v2

    iget-object v2, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->k:Lcom/mbridge/msdk/out/IDownloadListener;

    aput-object v2, v3, v7

    invoke-virtual {v0, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 371
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 369
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 367
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception v0

    .line 365
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public NotProgressBarInterceptedClick()Z
    .locals 3

    .line 224
    iget v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->i:I

    const/4 v1, 0x1

    const/4 v2, 0x3

    if-ne v0, v2, :cond_1

    .line 225
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b()V

    .line 226
    iget v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    .line 227
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->c()V

    return v1

    :cond_0
    if-ne v0, v1, :cond_1

    :cond_1
    return v1
.end method

.method public getmStatus()I
    .locals 1

    .line 183
    iget v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    return v0
.end method

.method protected onAttachedToWindow()V
    .locals 2

    .line 68
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    .line 69
    iget v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->j:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 70
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e()V

    :cond_0
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 9

    .line 76
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    .line 1376
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    :try_start_0
    const-string v0, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 1378
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 1379
    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v3, v2, [Ljava/lang/Object;

    const/4 v4, 0x0

    .line 1380
    invoke-virtual {v1, v4, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v3, "deleteDownloadListener"

    const/4 v5, 0x2

    new-array v6, v5, [Ljava/lang/Class;

    .line 1382
    const-class v7, Ljava/lang/String;

    aput-object v7, v6, v2

    const-class v7, Lcom/mbridge/msdk/out/IDownloadListener;

    const/4 v8, 0x1

    aput-object v7, v6, v8

    invoke-virtual {v0, v3, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v3, v5, [Ljava/lang/Object;

    .line 1383
    iget-object v5, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

    aput-object v5, v3, v2

    iget-object v2, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->k:Lcom/mbridge/msdk/out/IDownloadListener;

    aput-object v2, v3, v8

    invoke-virtual {v0, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 1384
    iput-object v4, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->k:Lcom/mbridge/msdk/out/IDownloadListener;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1392
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 1390
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 1388
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception v0

    .line 1386
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public performClick()Z
    .locals 2

    .line 238
    iget v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->i:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    .line 239
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e()V

    .line 240
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b()V

    .line 241
    iget v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 242
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->c()V

    .line 245
    :cond_0
    invoke-super {p0}, Landroid/widget/RelativeLayout;->performClick()Z

    move-result v0

    return v0
.end method

.method public setCtaldtypeUrl(Ljava/lang/String;)V
    .locals 1

    .line 205
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "ctaldtype"

    .line 206
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "1"

    .line 207
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    .line 208
    iput p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->j:I

    .line 209
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e()V

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 211
    iput p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->j:I

    :cond_1
    :goto_0
    return-void
.end method

.method public setLinkType(I)V
    .locals 0

    .line 195
    iput p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->i:I

    return-void
.end method

.method public setProgress(I)V
    .locals 1

    .line 81
    iput p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->c:I

    .line 82
    iget p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    .line 83
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a(I)V

    :cond_0
    return-void
.end method

.method public setText(Ljava/lang/String;)V
    .locals 0

    .line 186
    iput-object p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->g:Ljava/lang/String;

    .line 187
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a()V

    return-void
.end method

.method public setTextSize(F)V
    .locals 1

    .line 191
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setTextSize(F)V

    return-void
.end method

.method public setUniqueKey(Ljava/lang/String;)V
    .locals 0

    .line 199
    iput-object p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->h:Ljava/lang/String;

    .line 200
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b()V

    return-void
.end method
