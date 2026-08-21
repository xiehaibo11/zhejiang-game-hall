.class Lcom/sigmob/sdk/Sigmob$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/sdk/common/exceptions/CrashHandler$CrashHandlerListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/Sigmob;->i()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/Sigmob;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/Sigmob;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/Sigmob$7;->b:Lcom/sigmob/sdk/Sigmob;

    iput-object p2, p0, Lcom/sigmob/sdk/Sigmob$7;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public reportCrash(Ljava/lang/String;)V
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/Sigmob$7;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "com.czhj."

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    invoke-static {p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;->WindCrash(Ljava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;->sendServe()V

    :cond_1
    return-void
.end method
