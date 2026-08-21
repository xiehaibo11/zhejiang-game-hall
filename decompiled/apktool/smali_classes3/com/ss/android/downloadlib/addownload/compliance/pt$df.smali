.class Lcom/ss/android/downloadlib/addownload/compliance/pt$df;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/addownload/compliance/pt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "df"
.end annotation


# static fields
.field private static rg:Lcom/ss/android/downloadlib/addownload/compliance/pt;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 38
    new-instance v0, Lcom/ss/android/downloadlib/addownload/compliance/pt;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pt;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/pt$1;)V

    sput-object v0, Lcom/ss/android/downloadlib/addownload/compliance/pt$df;->rg:Lcom/ss/android/downloadlib/addownload/compliance/pt;

    return-void
.end method

.method static synthetic rg()Lcom/ss/android/downloadlib/addownload/compliance/pt;
    .locals 1

    .line 37
    sget-object v0, Lcom/ss/android/downloadlib/addownload/compliance/pt$df;->rg:Lcom/ss/android/downloadlib/addownload/compliance/pt;

    return-object v0
.end method
