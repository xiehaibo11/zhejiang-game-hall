.class final Lcom/kwad/components/offline/adLive/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/offline/adLive/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "a"
.end annotation


# static fields
.field private static final Zk:Lcom/kwad/components/offline/adLive/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/components/offline/adLive/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/components/offline/adLive/a;-><init>(B)V

    sput-object v0, Lcom/kwad/components/offline/adLive/a$a;->Zk:Lcom/kwad/components/offline/adLive/a;

    return-void
.end method

.method static synthetic sH()Lcom/kwad/components/offline/adLive/a;
    .locals 1

    sget-object v0, Lcom/kwad/components/offline/adLive/a$a;->Zk:Lcom/kwad/components/offline/adLive/a;

    return-object v0
.end method
