.class final Lcom/bytedance/pangle/service/a/a$b;
.super Ljava/util/HashSet;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bytedance/pangle/service/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashSet<",
        "Lcom/bytedance/pangle/f;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/bytedance/pangle/service/a/a;


# direct methods
.method constructor <init>(Lcom/bytedance/pangle/service/a/a;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/bytedance/pangle/service/a/a$b;->a:Lcom/bytedance/pangle/service/a/a;

    invoke-direct {p0}, Ljava/util/HashSet;-><init>()V

    return-void
.end method


# virtual methods
.method public final contains(Ljava/lang/Object;)Z
    .locals 5

    .line 35
    invoke-super {p0, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    .line 38
    :cond_0
    instance-of v0, p1, Lcom/bytedance/pangle/f;

    const/4 v2, 0x0

    if-nez v0, :cond_1

    return v2

    .line 41
    :cond_1
    invoke-virtual {p0}, Lcom/bytedance/pangle/service/a/a$b;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bytedance/pangle/f;

    .line 43
    :try_start_0
    invoke-interface {v3}, Lcom/bytedance/pangle/f;->a()I

    move-result v3

    move-object v4, p1

    check-cast v4, Lcom/bytedance/pangle/f;

    invoke-interface {v4}, Lcom/bytedance/pangle/f;->a()I

    move-result v4
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-ne v3, v4, :cond_2

    return v1

    :catch_0
    move-exception v3

    .line 47
    invoke-virtual {v3}, Landroid/os/RemoteException;->printStackTrace()V

    goto :goto_0

    :cond_3
    return v2
.end method

.method public final remove(Ljava/lang/Object;)Z
    .locals 5

    .line 55
    invoke-super {p0, p1}, Ljava/util/HashSet;->remove(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 v0, 0x0

    .line 59
    invoke-virtual {p0}, Lcom/bytedance/pangle/service/a/a$b;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bytedance/pangle/f;

    .line 61
    :try_start_0
    invoke-interface {v2}, Lcom/bytedance/pangle/f;->a()I

    move-result v3

    move-object v4, p1

    check-cast v4, Lcom/bytedance/pangle/f;

    invoke-interface {v4}, Lcom/bytedance/pangle/f;->a()I

    move-result v4
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-ne v3, v4, :cond_1

    move-object v0, v2

    goto :goto_1

    :catch_0
    move-exception v2

    .line 66
    invoke-virtual {v2}, Landroid/os/RemoteException;->printStackTrace()V

    goto :goto_0

    .line 69
    :cond_2
    :goto_1
    invoke-super {p0, v0}, Ljava/util/HashSet;->remove(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method
