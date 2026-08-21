.class Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/r;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/compliance/df$2;->rg(Ljava/lang/String;)Ljava/lang/Boolean;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/compliance/df$2;

.field final synthetic rg:[Z


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/compliance/df$2;[Z)V
    .locals 0

    .line 138
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;->df:Lcom/ss/android/downloadlib/addownload/compliance/df$2;

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;->rg:[Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Ljava/lang/String;)V
    .locals 8

    .line 141
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;->rg:[Z

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;->df:Lcom/ss/android/downloadlib/addownload/compliance/df$2;

    iget-object v2, v1, Lcom/ss/android/downloadlib/addownload/compliance/df$2;->q:Lcom/ss/android/downloadlib/addownload/compliance/df;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;->df:Lcom/ss/android/downloadlib/addownload/compliance/df$2;

    iget-wide v3, v1, Lcom/ss/android/downloadlib/addownload/compliance/df$2;->rg:J

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;->df:Lcom/ss/android/downloadlib/addownload/compliance/df$2;

    iget-wide v5, v1, Lcom/ss/android/downloadlib/addownload/compliance/df$2;->df:J

    move-object v7, p1

    invoke-static/range {v2 .. v7}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg(Lcom/ss/android/downloadlib/addownload/compliance/df;JJLjava/lang/String;)Z

    move-result p1

    const/4 v1, 0x0

    aput-boolean p1, v0, v1

    return-void
.end method

.method public rg(Ljava/lang/Throwable;)V
    .locals 2

    .line 147
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;->df:Lcom/ss/android/downloadlib/addownload/compliance/df$2;

    iget-wide v0, p1, Lcom/ss/android/downloadlib/addownload/compliance/df$2;->df:J

    const/4 p1, 0x2

    invoke-static {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(IJ)V

    .line 148
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;->rg:[Z

    const/4 v0, 0x0

    aput-boolean v0, p1, v0

    return-void
.end method
