.class public abstract Lcom/czhj/sdk/common/mta/PointEntityCrash;
.super Lcom/czhj/sdk/common/mta/PointEntitySuper;


# instance fields
.field private a:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/sdk/common/mta/PointEntitySuper;-><init>()V

    return-void
.end method


# virtual methods
.method public getCrashMessage()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntityCrash;->a:Ljava/lang/String;

    return-object v0
.end method

.method public setCrashMessage(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntityCrash;->a:Ljava/lang/String;

    return-void
.end method
