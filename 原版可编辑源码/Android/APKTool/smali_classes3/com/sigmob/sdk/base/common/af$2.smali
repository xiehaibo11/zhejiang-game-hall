.class final enum Lcom/sigmob/sdk/base/common/af$2;
.super Lcom/sigmob/sdk/base/common/af;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/common/af;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4010
    name = null
.end annotation


# direct methods
.method constructor <init>(Ljava/lang/String;IZ)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/base/common/af;-><init>(Ljava/lang/String;IZLcom/sigmob/sdk/base/common/af$1;)V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Ljava/lang/String;
    .locals 1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getWXProgramRes()Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getWXProgramRes()Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;->wx_app_path:Ljava/lang/String;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method protected a(Landroid/content/Context;Landroid/net/Uri;Lcom/sigmob/sdk/base/common/ag;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const-string p3, "get mini_program error: "

    invoke-virtual {p4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result v0

    const/4 v1, 0x7

    if-ne v0, v1, :cond_2

    invoke-virtual {p4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getWXProgramRes()Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    move-result-object p4

    if-eqz p4, :cond_1

    :try_start_0
    const-string v0, "com.tencent.mm.opensdk.openapi.WXAPIFactory"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "createWXAPI"

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Landroid/content/Context;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-class v4, Ljava/lang/String;

    const/4 v6, 0x1

    aput-object v4, v3, v6

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    invoke-virtual {v1, v6}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p1, v2, v5

    iget-object p1, p4, Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;->wx_app_id:Ljava/lang/String;

    aput-object p1, v2, v6

    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    const-string v0, "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    const-string v2, "userName"

    invoke-virtual {v0, v2}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v2

    invoke-virtual {v2, v6}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    iget-object v3, p4, Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;->wx_app_username:Ljava/lang/String;

    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string v2, "path"

    invoke-virtual {v0, v2}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v2

    invoke-virtual {v2, v6}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    iget-object p4, p4, Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;->wx_app_path:Ljava/lang/String;

    invoke-virtual {v2, v1, p4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string p4, "miniprogramType"

    invoke-virtual {v0, p4}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object p4

    invoke-virtual {p4, v6}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p4, v1, v0}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p4

    const-string v0, "sendReq"

    new-array v2, v6, [Ljava/lang/Class;

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object v3

    aput-object v3, v2, v5

    invoke-virtual {p4, v0, v2}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p4

    invoke-virtual {p4, v6}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v0, v6, [Ljava/lang/Object;

    aput-object v1, v0, v5

    invoke-virtual {p4, p1, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    const-string p4, "lance"

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "openB:isSendReq "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p4, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/Exception;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-direct {p1, p4}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    move-exception p1

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "get mini_program error "

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    new-instance p1, Ljava/lang/Exception;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_1
    :goto_0
    return-void

    :cond_2
    new-instance p1, Ljava/lang/Exception;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "performAction interaction_type is not right with "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public a(Landroid/net/Uri;)Z
    .locals 1

    invoke-virtual {p1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p1

    const-string v0, "HTTP"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "HTTPS"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method
