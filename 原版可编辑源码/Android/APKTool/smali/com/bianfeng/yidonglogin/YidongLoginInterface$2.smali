.class Lcom/bianfeng/yidonglogin/YidongLoginInterface$2;
.super Ljava/lang/Object;
.source "YidongLoginInterface.java"

# interfaces
.implements Lcom/cmic/gen/sdk/auth/GenTokenListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/yidonglogin/YidongLoginInterface;->initSdk()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)V
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$2;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onGetTokenComplete(ILorg/json/JSONObject;)V
    .locals 5

    if-eqz p2, :cond_2

    const/16 v0, 0x69

    .line 148
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "YidongLoginInterface  onGetTokenComplete--->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "----"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const-string p1, "resultCode"

    .line 149
    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "103000"

    .line 150
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 p1, 0x1

    .line 151
    invoke-static {p1}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->access$002(Z)Z

    .line 152
    iget-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$2;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    invoke-static {p1}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->access$100(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object p1

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->quitAuthActivity()V

    const-string p1, "token"

    .line 153
    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 154
    iget-object p2, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$2;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder;->createJson(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;

    move-result-object p2

    const-string v1, "session"

    .line 155
    invoke-virtual {p2, v1, p1}, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->append(Ljava/lang/String;Ljava/lang/Object;)Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;

    move-result-object p1

    const/16 p2, 0x66

    .line 156
    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->sendResult(I)V

    goto :goto_0

    :cond_0
    const-string v1, "200020"

    .line 157
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "|"

    if-eqz v1, :cond_1

    .line 158
    :try_start_1
    invoke-static {}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->access$000()Z

    move-result v1

    if-nez v1, :cond_2

    .line 159
    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$2;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    const/16 v3, 0x6a

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v3, p1}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 163
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$2;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v0, p1}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->sendResult(ILjava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 166
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 167
    iget-object p2, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$2;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, v0, p1}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->sendResult(ILjava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method
