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

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    .line 6
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->plugin:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    return-void
.end method


# virtual methods
.method public append(Ljava/lang/String;Ljava/lang/Object;)Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;
    .locals 1

    .line 1
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object p0
.end method

.method public sendResult(I)V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->plugin:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public sendResult(ILjava/lang/Object;)V
    .locals 2

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->plugin:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, v1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/Object;Ljava/lang/Object;)V

    return-void
.end method

.method public sendResultWithoutInterceptors(I)V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->plugin:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResultWithoutInterceptors(ILjava/lang/String;)V

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->json:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
