.class final Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$5;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)V
    .locals 0

    .line 325
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$5;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    .line 328
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$5;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->e(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Landroid/webkit/WebView;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 329
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "id"

    .line 331
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$5;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->d:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 332
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "unitId"

    .line 333
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$5;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-static {v2}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->f(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 334
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 335
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "NativeEC Call H5 onCloseBtnClicked "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 337
    invoke-virtual {v0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 339
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$5;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->e(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v1, 0x2

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    const-string v1, "onCloseBtnClicked"

    invoke-static {v0, v1, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
