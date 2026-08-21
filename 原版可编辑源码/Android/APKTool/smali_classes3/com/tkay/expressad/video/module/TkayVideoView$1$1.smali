.class final Lcom/tkay/expressad/video/module/TkayVideoView$1$1;
.super Lcom/tkay/expressad/widget/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayVideoView$1;->a(Lcom/tkay/expressad/video/dynview/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayVideoView$1;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView$1;)V
    .locals 0

    .line 385
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1$1;->a:Lcom/tkay/expressad/video/module/TkayVideoView$1;

    invoke-direct {p0}, Lcom/tkay/expressad/widget/a;-><init>()V

    return-void
.end method


# virtual methods
.method protected final a(Landroid/view/View;)V
    .locals 4

    .line 388
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1$1;->a:Lcom/tkay/expressad/video/module/TkayVideoView$1;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView$1;->c:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/module/a/a;

    move-result-object p1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    .line 411
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    .line 412
    :try_start_1
    sget-object p1, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1$1;->a:Lcom/tkay/expressad/video/module/TkayVideoView$1;

    iget-object v1, v1, Lcom/tkay/expressad/video/module/TkayVideoView$1;->c:Lcom/tkay/expressad/video/module/TkayVideoView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(I)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    goto :goto_0

    :catch_1
    move-exception v0

    move-object v3, v0

    move-object v0, p1

    move-object p1, v3

    .line 414
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 422
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$1$1;->a:Lcom/tkay/expressad/video/module/TkayVideoView$1;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView$1;->c:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/module/a/a;

    move-result-object p1

    const/16 v1, 0x69

    invoke-interface {p1, v1, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 423
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    :cond_0
    return-void
.end method
