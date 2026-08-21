.class public final Lcom/mbridge/msdk/advanced/c/b;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadListenerImpl.java"

# interfaces
.implements Lcom/mbridge/msdk/advanced/a/a;


# instance fields
.field private a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

.field private b:Lcom/mbridge/msdk/advanced/c/c;

.field private c:Lcom/mbridge/msdk/out/MBridgeIds;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/advanced/c/c;Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/b;->b:Lcom/mbridge/msdk/advanced/c/c;

    .line 27
    iput-object p2, p0, Lcom/mbridge/msdk/advanced/c/b;->c:Lcom/mbridge/msdk/out/MBridgeIds;

    .line 28
    invoke-virtual {p2}, Lcom/mbridge/msdk/out/MBridgeIds;->getUnitId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/b;->d:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 4

    .line 41
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onLoadSuccessed: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NativeAdvancedLoadManager"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/b;->b:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/c/c;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 44
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/b;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/b;->b:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz v1, :cond_0

    .line 45
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/b;->c:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/NativeAdvancedAdListener;->onLoadSuccessed(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 48
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/b;->b:Lcom/mbridge/msdk/advanced/c/c;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/c/c;->a(Z)V

    .line 49
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 50
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 51
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/c/b;->d:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v3

    invoke-static {v1, v0, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;Z)V

    const/4 v0, 0x2

    if-ne p2, v0, :cond_1

    .line 52
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/b;->b:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz p2, :cond_1

    const/4 v0, 0x1

    .line 53
    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/advanced/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Z)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/NativeAdvancedAdListener;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/b;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 36
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/b;->e:Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/lang/String;I)V
    .locals 2

    .line 60
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onLoadFailed: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "NativeAdvancedLoadManager"

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 61
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/b;->b:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz p2, :cond_1

    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/c/c;->a()Z

    move-result p2

    if-eqz p2, :cond_1

    .line 62
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/b;->a:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    if-eqz p2, :cond_0

    .line 63
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/b;->c:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-interface {p2, v0, p1}, Lcom/mbridge/msdk/out/NativeAdvancedAdListener;->onLoadFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 65
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/c/b;->b:Lcom/mbridge/msdk/advanced/c/c;

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/advanced/c/c;->a(Z)V

    .line 66
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/b;->d:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/c/b;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-static {p2, p1, v0, v1}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_1
    return-void
.end method
