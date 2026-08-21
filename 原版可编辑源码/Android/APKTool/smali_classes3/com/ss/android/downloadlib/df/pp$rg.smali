.class Lcom/ss/android/downloadlib/df/pp$rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/df/pp;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "rg"
.end annotation


# static fields
.field private static rg:Lcom/ss/android/downloadlib/df/pp;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 17
    new-instance v0, Lcom/ss/android/downloadlib/df/pp;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ss/android/downloadlib/df/pp;-><init>(Lcom/ss/android/downloadlib/df/pp$1;)V

    sput-object v0, Lcom/ss/android/downloadlib/df/pp$rg;->rg:Lcom/ss/android/downloadlib/df/pp;

    return-void
.end method

.method static synthetic rg()Lcom/ss/android/downloadlib/df/pp;
    .locals 1

    .line 16
    sget-object v0, Lcom/ss/android/downloadlib/df/pp$rg;->rg:Lcom/ss/android/downloadlib/df/pp;

    return-object v0
.end method
