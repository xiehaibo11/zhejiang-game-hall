.class public Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;
.super Ljava/lang/Object;
.source "YmnDataBuilder.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "JsonData"
.end annotation


# instance fields
.field json:Lorg/json/JSONObject;

.field plugin:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 1
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 13
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    .line 17
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->plugin:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 18
    return-void
.end method


# virtual methods
.method public append(Ljava/lang/String;Ljava/lang/Object;)Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/Object;

    .line 22
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 25
    goto :goto_0

    .line 23
    :catch_0
    move-exception v0

    .line 24
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 26
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-object p0
.end method

.method public sendResult(I)V
    .locals 2
    .param p1, "code"    # I

    .line 30
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->plugin:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 31
    return-void
.end method

.method public sendResult(ILjava/lang/Object;)V
    .locals 2
    .param p1, "code"    # I
    .param p2, "ext"    # Ljava/lang/Object;

    .line 34
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->plugin:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, v1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/Object;Ljava/lang/Object;)V

    .line 35
    return-void
.end method

.method public sendResultWithoutInterceptors(I)V
    .locals 2
    .param p1, "code"    # I

    .line 38
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->plugin:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResultWithoutInterceptors(ILjava/lang/String;)V

    .line 39
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
