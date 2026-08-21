.class public Lcom/ss/android/downloadlib/q/fw;
.super Lcom/ss/android/socialbase/appdownloader/q/rg;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/q/fw$rg;
    }
.end annotation


# static fields
.field private static rg:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 23
    const-class v0, Lcom/ss/android/downloadlib/q/fw;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/downloadlib/q/fw;->rg:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 25
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/q/rg;-><init>()V

    return-void
.end method

.method static synthetic df()Ljava/lang/String;
    .locals 1

    .line 21
    sget-object v0, Lcom/ss/android/downloadlib/q/fw;->rg:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public rg(Landroid/content/Context;)Lcom/ss/android/socialbase/appdownloader/q/hq;
    .locals 1

    .line 41
    new-instance v0, Lcom/ss/android/downloadlib/q/fw$1;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/downloadlib/q/fw$1;-><init>(Lcom/ss/android/downloadlib/q/fw;Landroid/content/Context;)V

    return-object v0
.end method

.method public rg()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
