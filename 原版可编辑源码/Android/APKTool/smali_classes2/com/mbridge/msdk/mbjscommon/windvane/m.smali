.class public final Lcom/mbridge/msdk/mbjscommon/windvane/m;
.super Lcom/mbridge/msdk/mbjscommon/base/b;
.source "WindVaneWebViewClient.java"


# static fields
.field public static b:Z = true


# instance fields
.field protected a:Ljava/lang/String;

.field private c:I

.field private d:Lcom/mbridge/msdk/mbjscommon/windvane/d;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 44
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/base/b;-><init>()V

    const/4 v0, 0x0

    .line 31
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/m;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 32
    iput v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/m;->c:I

    return-void
.end method

.method private a(Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
    .locals 4

    const-string v0, "WindVaneWebViewClient"

    .line 153
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/k;->d(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 154
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "is image "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 155
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v1

    .line 156
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "find image from cache "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v1, :cond_0

    .line 157
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_0

    .line 158
    new-instance v0, Landroid/webkit/WebResourceResponse;

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/k;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v2, "utf-8"

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/c/a;->a(Landroid/graphics/Bitmap;)Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {v0, p1, v2, v1}, Landroid/webkit/WebResourceResponse;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public final onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 54
    invoke-super {p0, p1, p2, p3}, Lcom/mbridge/msdk/mbjscommon/base/b;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 55
    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/m;->a:Ljava/lang/String;

    .line 56
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/m;->d:Lcom/mbridge/msdk/mbjscommon/windvane/d;

    if-eqz v0, :cond_0

    .line 57
    invoke-interface {v0, p1, p2, p3}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->a(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method

.method public final shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
    .locals 2

    .line 92
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/m;->a(Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 94
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "find WebResourceResponse url is "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "WindVaneWebViewClient"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    .line 97
    :cond_0
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/base/b;->shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method
