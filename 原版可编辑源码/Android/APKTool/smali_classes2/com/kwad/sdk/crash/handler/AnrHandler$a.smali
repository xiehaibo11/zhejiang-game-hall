.class final Lcom/kwad/sdk/crash/handler/AnrHandler$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/crash/handler/AnrHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final aAg:Lcom/kwad/sdk/crash/handler/AnrHandler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/crash/handler/AnrHandler;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/crash/handler/AnrHandler;-><init>(Lcom/kwad/sdk/crash/handler/AnrHandler$1;)V

    sput-object v0, Lcom/kwad/sdk/crash/handler/AnrHandler$a;->aAg:Lcom/kwad/sdk/crash/handler/AnrHandler;

    return-void
.end method

.method static synthetic ER()Lcom/kwad/sdk/crash/handler/AnrHandler;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/crash/handler/AnrHandler$a;->aAg:Lcom/kwad/sdk/crash/handler/AnrHandler;

    return-object v0
.end method
