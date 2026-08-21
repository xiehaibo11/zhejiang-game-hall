.class public Lcom/kwad/sdk/ranger/c;
.super Ljava/lang/Object;

# interfaces
.implements Lokhttp3/EventListener$Factory;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/ranger/c$a;
    }
.end annotation


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field aGD:Lokhttp3/EventListener;

.field aGE:Lcom/kwad/sdk/ranger/c$a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Ranger_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-class v1, Lcom/kwad/sdk/ranger/c;

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/ranger/c;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Object;Lcom/kwad/sdk/ranger/c$a;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    check-cast p1, Lokhttp3/EventListener;

    iput-object p1, p0, Lcom/kwad/sdk/ranger/c;->aGD:Lokhttp3/EventListener;

    iput-object p2, p0, Lcom/kwad/sdk/ranger/c;->aGE:Lcom/kwad/sdk/ranger/c$a;

    return-void
.end method
