.class final Lcom/kwad/sdk/crash/handler/AnrHandler$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/util/Printer;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/crash/handler/AnrHandler;->dumpAnrReason(Ljava/lang/String;ILcom/kwad/sdk/crash/model/message/AnrExceptionMessage;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aAe:Ljava/lang/StringBuilder;


# direct methods
.method constructor <init>(Ljava/lang/StringBuilder;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/handler/AnrHandler$2;->aAe:Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final println(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/crash/handler/AnrHandler$2;->aAe:Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method
