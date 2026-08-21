.class public Lcom/ss/android/downloadlib/addownload/model/q;
.super Ljava/lang/Object;


# static fields
.field public static df:I = 0x1

.field public static q:I = 0x2

.field public static rg:I


# instance fields
.field private c:Lorg/json/JSONObject;

.field private fw:I

.field private pp:J

.field private pt:I

.field private rz:Ljava/lang/String;

.field private ux:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 25
    sget v0, Lcom/ss/android/downloadlib/addownload/model/q;->rg:I

    iput v0, p0, Lcom/ss/android/downloadlib/addownload/model/q;->pt:I

    const-wide/16 v0, 0x0

    .line 27
    iput-wide v0, p0, Lcom/ss/android/downloadlib/addownload/model/q;->pp:J

    const/4 v0, 0x0

    .line 28
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/q;->c:Lorg/json/JSONObject;

    const/4 v0, 0x0

    .line 29
    iput v0, p0, Lcom/ss/android/downloadlib/addownload/model/q;->fw:I

    const-string v0, ""

    .line 30
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/q;->ux:Ljava/lang/String;

    .line 31
    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/model/q;->rz:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public df()I
    .locals 1

    .line 44
    iget v0, p0, Lcom/ss/android/downloadlib/addownload/model/q;->fw:I

    return v0
.end method

.method public df(I)Lcom/ss/android/downloadlib/addownload/model/q;
    .locals 0

    .line 88
    iput p1, p0, Lcom/ss/android/downloadlib/addownload/model/q;->fw:I

    return-object p0
.end method

.method public rg(I)Lcom/ss/android/downloadlib/addownload/model/q;
    .locals 0

    .line 70
    iput p1, p0, Lcom/ss/android/downloadlib/addownload/model/q;->pt:I

    return-object p0
.end method

.method public rg()Z
    .locals 2

    .line 35
    iget v0, p0, Lcom/ss/android/downloadlib/addownload/model/q;->pt:I

    sget v1, Lcom/ss/android/downloadlib/addownload/model/q;->df:I

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method
