.class Lcom/ss/android/downloadlib/event/AdEventHandler$rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/event/AdEventHandler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "rg"
.end annotation


# static fields
.field private static rg:Lcom/ss/android/downloadlib/event/AdEventHandler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 53
    new-instance v0, Lcom/ss/android/downloadlib/event/AdEventHandler;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;-><init>(Lcom/ss/android/downloadlib/event/AdEventHandler$1;)V

    sput-object v0, Lcom/ss/android/downloadlib/event/AdEventHandler$rg;->rg:Lcom/ss/android/downloadlib/event/AdEventHandler;

    return-void
.end method

.method static synthetic rg()Lcom/ss/android/downloadlib/event/AdEventHandler;
    .locals 1

    .line 52
    sget-object v0, Lcom/ss/android/downloadlib/event/AdEventHandler$rg;->rg:Lcom/ss/android/downloadlib/event/AdEventHandler;

    return-object v0
.end method
