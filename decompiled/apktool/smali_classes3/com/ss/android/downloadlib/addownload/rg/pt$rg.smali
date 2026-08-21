.class public Lcom/ss/android/downloadlib/addownload/rg/pt$rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/addownload/rg/pt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "rg"
.end annotation


# instance fields
.field private c:Lcom/ss/android/downloadlib/addownload/rg/q;

.field private df:Ljava/lang/String;

.field private pp:Z

.field private pt:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private rg:Landroid/app/Activity;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 128
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 129
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg:Landroid/app/Activity;

    return-void
.end method


# virtual methods
.method public df(Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;
    .locals 0

    .line 138
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->q:Ljava/lang/String;

    return-object p0
.end method

.method public q(Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->pt:Ljava/lang/String;

    return-object p0
.end method

.method public rg(Lcom/ss/android/downloadlib/addownload/rg/q;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;
    .locals 0

    .line 153
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->c:Lcom/ss/android/downloadlib/addownload/rg/q;

    return-object p0
.end method

.method public rg(Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;
    .locals 0

    .line 133
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->df:Ljava/lang/String;

    return-object p0
.end method

.method public rg(Z)Lcom/ss/android/downloadlib/addownload/rg/pt$rg;
    .locals 0

    .line 148
    iput-boolean p1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->pp:Z

    return-object p0
.end method

.method public rg()Lcom/ss/android/downloadlib/addownload/rg/pt;
    .locals 8

    .line 158
    new-instance v7, Lcom/ss/android/downloadlib/addownload/rg/pt;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->rg:Landroid/app/Activity;

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->df:Ljava/lang/String;

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->q:Ljava/lang/String;

    iget-object v4, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->pt:Ljava/lang/String;

    iget-boolean v5, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->pp:Z

    iget-object v6, p0, Lcom/ss/android/downloadlib/addownload/rg/pt$rg;->c:Lcom/ss/android/downloadlib/addownload/rg/q;

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/ss/android/downloadlib/addownload/rg/pt;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/ss/android/downloadlib/addownload/rg/q;)V

    return-object v7
.end method
