.class public final Lcom/tkay/expressad/atsignalcommon/windvane/p;
.super Lcom/tkay/expressad/atsignalcommon/base/b;


# static fields
.field public static final a:Ljava/lang/String; = "WindVaneWebViewClient"

.field public static final c:I = 0x0

.field public static final d:I = 0x1

.field public static final e:Ljava/lang/String; = "mmusdk_cache"

.field public static final f:Ljava/lang/String; = "1"

.field public static g:Z = true


# instance fields
.field protected b:Ljava/lang/String;

.field private h:I

.field private i:Lcom/tkay/expressad/atsignalcommon/windvane/e;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 34
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/base/b;-><init>()V

    const/4 v0, 0x0

    .line 21
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/p;->b:Ljava/lang/String;

    const/4 v0, 0x0

    .line 22
    iput v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/p;->h:I

    return-void
.end method

.method private constructor <init>(I)V
    .locals 1

    .line 38
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/base/b;-><init>()V

    const/4 v0, 0x0

    .line 21
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/p;->b:Ljava/lang/String;

    const/4 v0, 0x0

    .line 22
    iput v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/p;->h:I

    .line 39
    iput p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/p;->h:I

    return-void
.end method

.method private static a(Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
    .locals 5

    const/4 v0, 0x0

    .line 80
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-static {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/n;->d(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 81
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    .line 1118
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1121
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/s;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1122
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1123
    invoke-virtual {v1, p0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v4

    if-eqz v4, :cond_0

    .line 1124
    invoke-virtual {v1, p0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v1

    goto :goto_0

    .line 1125
    :cond_0
    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 1126
    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/a;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1128
    invoke-virtual {v1, p0, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    move-object v1, v2

    goto :goto_0

    :cond_1
    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_2

    .line 82
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v2

    if-nez v2, :cond_2

    .line 83
    new-instance v2, Landroid/webkit/WebResourceResponse;

    invoke-static {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/n;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v3, "utf-8"

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/a;->a(Landroid/graphics/Bitmap;)Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {v2, p0, v3, v1}, Landroid/webkit/WebResourceResponse;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v2

    :catchall_0
    :cond_2
    return-object v0
.end method

.method private static a(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 3

    .line 52
    new-instance v0, Ljava/io/BufferedReader;

    new-instance v1, Ljava/io/InputStreamReader;

    invoke-direct {v1, p0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v0, v1}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 53
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    .line 57
    :goto_0
    :try_start_0
    invoke-virtual {v0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 58
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 61
    :try_start_1
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 65
    :cond_0
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 63
    :goto_1
    throw p0
.end method

.method private b(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V
    .locals 0

    .line 31
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/p;->i:Lcom/tkay/expressad/atsignalcommon/windvane/e;

    return-void
.end method


# virtual methods
.method public final onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 44
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/atsignalcommon/base/b;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 45
    iput-object p2, p0, Lcom/tkay/expressad/atsignalcommon/windvane/p;->b:Ljava/lang/String;

    .line 46
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/p;->i:Lcom/tkay/expressad/atsignalcommon/windvane/e;

    if-eqz v0, :cond_0

    .line 47
    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method

.method public final shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
    .locals 1

    .line 71
    invoke-static {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/p;->a(Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    .line 75
    :cond_0
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/base/b;->shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method
