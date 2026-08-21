.class final Lcom/kwad/sdk/crash/handler/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/crash/handler/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final aAi:Lcom/kwad/sdk/crash/handler/c;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/crash/handler/c;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/crash/handler/c;-><init>(B)V

    sput-object v0, Lcom/kwad/sdk/crash/handler/c$a;->aAi:Lcom/kwad/sdk/crash/handler/c;

    return-void
.end method

.method static synthetic ET()Lcom/kwad/sdk/crash/handler/c;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/crash/handler/c$a;->aAi:Lcom/kwad/sdk/crash/handler/c;

    return-object v0
.end method
