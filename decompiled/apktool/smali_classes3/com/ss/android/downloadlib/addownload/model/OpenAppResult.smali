.class public Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/addownload/model/OpenAppResult$Source;,
        Lcom/ss/android/downloadlib/addownload/model/OpenAppResult$Message;,
        Lcom/ss/android/downloadlib/addownload/model/OpenAppResult$Type;
    }
.end annotation


# instance fields
.field private df:I

.field private q:Ljava/lang/String;

.field private rg:I


# direct methods
.method public constructor <init>(I)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 55
    invoke-direct {p0, p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(IILjava/lang/String;)V

    return-void
.end method

.method public constructor <init>(II)V
    .locals 1

    const/4 v0, 0x0

    .line 59
    invoke-direct {p0, p1, p2, v0}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(IILjava/lang/String;)V

    return-void
.end method

.method public constructor <init>(IILjava/lang/String;)V
    .locals 0

    .line 66
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 67
    iput p1, p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->rg:I

    .line 68
    iput p2, p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->df:I

    .line 69
    iput-object p3, p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->q:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(ILjava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 63
    invoke-direct {p0, p1, v0, p2}, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;-><init>(IILjava/lang/String;)V

    return-void
.end method


# virtual methods
.method public df()Ljava/lang/String;
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->q:Ljava/lang/String;

    return-object v0
.end method

.method public getType()I
    .locals 1

    .line 73
    iget v0, p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->rg:I

    return v0
.end method

.method public rg()I
    .locals 1

    .line 77
    iget v0, p0, Lcom/ss/android/downloadlib/addownload/model/OpenAppResult;->df:I

    return v0
.end method
