.class public abstract Lcom/czhj/sdk/common/mta/PointEntityGDPR;
.super Lcom/czhj/sdk/common/mta/PointEntitySuper;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/sdk/common/mta/PointEntitySuper;-><init>()V

    return-void
.end method


# virtual methods
.method public getAge()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getAge_restricted()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getGdpr_dialog_region()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->d:Ljava/lang/String;

    return-object v0
.end method

.method public getGdpr_region()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->e:Ljava/lang/String;

    return-object v0
.end method

.method public getIs_minor()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->g:Ljava/lang/String;

    return-object v0
.end method

.method public getIs_unpersonalized()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->f:Ljava/lang/String;

    return-object v0
.end method

.method public getUser_consent()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->a:Ljava/lang/String;

    return-object v0
.end method

.method public setAge(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->c:Ljava/lang/String;

    return-void
.end method

.method public setAge_restricted(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->b:Ljava/lang/String;

    return-void
.end method

.method public setGdpr_dialog_region(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->d:Ljava/lang/String;

    return-void
.end method

.method public setGdpr_region(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->e:Ljava/lang/String;

    return-void
.end method

.method public setIs_minor(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->g:Ljava/lang/String;

    return-void
.end method

.method public setIs_unpersonalized(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->f:Ljava/lang/String;

    return-void
.end method

.method public setUser_consent(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntityGDPR;->a:Ljava/lang/String;

    return-void
.end method
