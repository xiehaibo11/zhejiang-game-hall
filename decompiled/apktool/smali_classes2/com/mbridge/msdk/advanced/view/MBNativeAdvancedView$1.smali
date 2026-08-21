.class final Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView$1;
.super Ljava/lang/Object;
.source "MBNativeAdvancedView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)V
    .locals 0

    .line 191
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView$1;->a:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 9

    const-string v0, "webviewshow"

    .line 195
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->a()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, ""
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v2, 0x2

    :try_start_1
    new-array v3, v2, [I

    .line 199
    iget-object v4, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView$1;->a:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-static {v4}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->getLocationOnScreen([I)V

    .line 200
    invoke-static {}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->a()Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "coordinate:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v6, 0x0

    aget v7, v3, v6

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "--"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v7, 0x1

    aget v8, v3, v7

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 201
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "startX"

    .line 202
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v8

    aget v6, v3, v6

    int-to-float v6, v6

    invoke-static {v8, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;F)I

    move-result v6

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "startY"

    .line 203
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v6

    aget v3, v3, v7

    int-to-float v3, v3

    invoke-static {v6, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {v4, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 204
    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v3

    .line 206
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5, v3}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 208
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    .line 209
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView$1;->a:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-static {v3}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object v3

    invoke-virtual {v2, v3, v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 211
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method
