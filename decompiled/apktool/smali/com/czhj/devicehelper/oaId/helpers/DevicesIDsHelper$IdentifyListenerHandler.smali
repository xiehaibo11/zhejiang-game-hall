.class Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$IdentifyListenerHandler;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/reflect/InvocationHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "IdentifyListenerHandler"
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public invoke(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Throwable;
        }
    .end annotation

    :try_start_0
    const-string p1, "OnSupport"

    invoke-virtual {p2}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->c()Ljava/lang/Class;

    move-result-object p1

    const-string p2, "getOAID"

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Class;

    invoke-virtual {p1, p2, v1}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    array-length p2, p3

    const/4 v1, 0x1

    if-ne p2, v1, :cond_0

    aget-object p2, p3, v0

    new-array p3, v0, [Ljava/lang/Object;

    invoke-virtual {p1, p2, p3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    :goto_0
    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->c(Ljava/lang/String;)Ljava/lang/String;

    goto :goto_1

    :cond_0
    aget-object p2, p3, v1

    new-array p3, v0, [Ljava/lang/Object;

    invoke-virtual {p1, p2, p3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    goto :goto_0

    :goto_1
    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->d()Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->e()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->d()Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object p1

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->e()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "MdidSdkHelper oaid:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->e()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->d()Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->e()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->d()Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object p1

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->e()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_2
    :goto_2
    const/4 p1, 0x0

    return-object p1
.end method
