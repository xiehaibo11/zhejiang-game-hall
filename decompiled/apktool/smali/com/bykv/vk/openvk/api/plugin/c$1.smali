.class Lcom/bykv/vk/openvk/api/plugin/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/pangle/log/IZeusReporter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/c;->df(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/bykv/vk/openvk/api/plugin/c;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/c;)V
    .locals 0

    .line 144
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/c$1;->rg:Lcom/bykv/vk/openvk/api/plugin/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public report(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    const-string v0, "message"

    const-string v1, "duration"

    const-string v2, "load_finish"

    if-ne p1, v2, :cond_0

    if-eqz p2, :cond_0

    const-string v2, "plugin_package_name"

    .line 147
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "com.bykv.vk"

    invoke-virtual {v3, v2}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 149
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 150
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 151
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 152
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c$1;->rg:Lcom/bykv/vk/openvk/api/plugin/c;

    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/api/plugin/c;)Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "zeus"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 154
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 157
    :cond_0
    :goto_0
    invoke-static {}, Lcom/bykv/vk/openvk/api/plugin/c;->q()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 158
    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/api/plugin/pt;->rg(Ljava/lang/String;Lorg/json/JSONObject;)V

    goto :goto_1

    .line 160
    :cond_1
    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/api/plugin/pt;->q(Ljava/lang/String;Lorg/json/JSONObject;)V

    :goto_1
    return-void
.end method
