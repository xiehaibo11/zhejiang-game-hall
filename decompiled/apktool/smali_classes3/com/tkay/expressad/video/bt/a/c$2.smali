.class final Lcom/tkay/expressad/video/bt/a/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/Object;Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/Object;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Landroid/graphics/Rect;

.field final synthetic g:I

.field final synthetic h:I

.field final synthetic i:Lcom/tkay/expressad/video/bt/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/a/c;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Rect;II)V
    .locals 0

    .line 340
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/a/c$2;->i:Lcom/tkay/expressad/video/bt/a/c;

    iput-object p2, p0, Lcom/tkay/expressad/video/bt/a/c$2;->a:Ljava/lang/Object;

    iput-object p3, p0, Lcom/tkay/expressad/video/bt/a/c$2;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/expressad/video/bt/a/c$2;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/expressad/video/bt/a/c$2;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/tkay/expressad/video/bt/a/c$2;->e:Ljava/lang/String;

    iput-object p7, p0, Lcom/tkay/expressad/video/bt/a/c$2;->f:Landroid/graphics/Rect;

    iput p8, p0, Lcom/tkay/expressad/video/bt/a/c$2;->g:I

    iput p9, p0, Lcom/tkay/expressad/video/bt/a/c$2;->h:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 345
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/a/c$2;->a:Ljava/lang/Object;

    check-cast v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 346
    iget-object v1, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_0

    .line 347
    iget-object v0, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 348
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    const-string v1, ""

    const/4 v0, 0x0

    .line 350
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/a/c$2;->i:Lcom/tkay/expressad/video/bt/a/c;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/a/c$2;->b:Ljava/lang/String;

    invoke-virtual {v2, v3, v1}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v2

    .line 351
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v3

    .line 352
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->c()Ljava/util/LinkedHashMap;

    move-result-object v4

    invoke-virtual {v4, v3, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 353
    new-instance v4, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;-><init>(Landroid/content/Context;)V

    .line 354
    invoke-virtual {v2, v3, v4}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 355
    invoke-virtual {v4, v3}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setInstanceId(Ljava/lang/String;)V

    .line 356
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/a/c$2;->b:Ljava/lang/String;

    invoke-virtual {v4, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setUnitId(Ljava/lang/String;)V

    .line 357
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/a/c$2;->c:Ljava/lang/String;

    invoke-virtual {v4, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setFileURL(Ljava/lang/String;)V

    .line 358
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/a/c$2;->d:Ljava/lang/String;

    invoke-virtual {v4, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setFilePath(Ljava/lang/String;)V

    .line 359
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/a/c$2;->e:Ljava/lang/String;

    invoke-virtual {v4, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setHtml(Ljava/lang/String;)V

    .line 360
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/a/c$2;->f:Landroid/graphics/Rect;

    invoke-virtual {v4, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setRect(Landroid/graphics/Rect;)V

    .line 361
    invoke-virtual {v4, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setWebViewRid(Ljava/lang/String;)V

    .line 362
    invoke-virtual {v4, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setCreateWebView(Landroid/webkit/WebView;)V

    .line 363
    iget v0, p0, Lcom/tkay/expressad/video/bt/a/c$2;->g:I

    if-gtz v0, :cond_1

    iget v0, p0, Lcom/tkay/expressad/video/bt/a/c$2;->h:I

    if-lez v0, :cond_2

    .line 364
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/video/bt/a/c$2;->g:I

    iget v1, p0, Lcom/tkay/expressad/video/bt/a/c$2;->h:I

    invoke-virtual {v4, v0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setLayout(II)V

    .line 367
    :cond_2
    invoke-virtual {v4}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->preload()V

    .line 368
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/a/c$2;->a:Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method
