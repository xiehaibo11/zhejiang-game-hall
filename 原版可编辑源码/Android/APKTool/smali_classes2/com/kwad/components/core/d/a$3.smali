.class final Lcom/kwad/components/core/d/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/crash/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/d/a;->mD()Lcom/kwad/sdk/crash/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(ILcom/kwad/sdk/crash/model/message/ExceptionMessage;)V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/m;->xU()V

    const/4 p2, 0x1

    if-eq p1, p2, :cond_0

    const/4 p2, 0x3

    if-eq p1, p2, :cond_0

    const/4 p2, 0x4

    if-eq p1, p2, :cond_0

    goto :goto_0

    :cond_0
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "onOccurred crashType="

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "KsAdExceptionCollectorHelper"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
