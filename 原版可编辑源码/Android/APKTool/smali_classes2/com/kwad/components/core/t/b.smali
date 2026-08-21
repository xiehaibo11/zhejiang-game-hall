.class public Lcom/kwad/components/core/t/b;
.super Ljava/lang/Object;


# static fields
.field private static volatile Ri:Lcom/kwad/components/core/t/b;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static qj()Lcom/kwad/components/core/t/b;
    .locals 2

    sget-object v0, Lcom/kwad/components/core/t/b;->Ri:Lcom/kwad/components/core/t/b;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/core/t/b;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/core/t/b;->Ri:Lcom/kwad/components/core/t/b;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/t/b;

    invoke-direct {v1}, Lcom/kwad/components/core/t/b;-><init>()V

    sput-object v1, Lcom/kwad/components/core/t/b;->Ri:Lcom/kwad/components/core/t/b;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/components/core/t/b;->Ri:Lcom/kwad/components/core/t/b;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V
    .locals 1

    const-class p2, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {p2}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object p2

    check-cast p2, Lcom/kwad/sdk/components/DevelopMangerComponents;

    if-eqz p2, :cond_0

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "processAdImpress notImpression: "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "AdEventHelper"

    invoke-static {v0, p2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 p2, 0x0

    if-eqz p3, :cond_1

    invoke-virtual {p3, p1, p2, p2, p2}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/g/a;)Lcom/kwad/sdk/core/report/j;

    :cond_1
    invoke-static {p1, p2, p3}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    new-instance p2, Lcom/kwad/components/core/t/b$1;

    invoke-direct {p2, p0, p1}, Lcom/kwad/components/core/t/b$1;-><init>(Lcom/kwad/components/core/t/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {p2}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/kwad/components/core/c/f;->mu()Lcom/kwad/components/core/c/f;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/c/f;->J(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method
