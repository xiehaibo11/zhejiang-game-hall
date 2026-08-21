.class public final Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;
.super Lcom/sigmob/sdk/base/mta/PointEntitySigmob;


# instance fields
.field private a:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;-><init>()V

    return-void
.end method

.method public static SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;-><init>()V

    const-string v1, "9"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setAc_type(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setCategory(Ljava/lang/String;)V

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setError_code(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setError_message(Ljava/lang/String;)V

    return-object v0
.end method


# virtual methods
.method public getError_message()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->a:Ljava/lang/String;

    return-object v0
.end method

.method public setError_message(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->a:Ljava/lang/String;

    return-void
.end method
