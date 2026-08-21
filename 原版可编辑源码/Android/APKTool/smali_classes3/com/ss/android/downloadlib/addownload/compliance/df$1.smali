.class Lcom/ss/android/downloadlib/addownload/compliance/df$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/utils/Chain$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/compliance/df;->rg(Lcom/ss/android/downloadlib/addownload/model/pp;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/ss/android/downloadlib/utils/Chain$rg<",
        "Ljava/lang/Boolean;",
        "Ljava/lang/Object;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic df:J

.field final synthetic q:Lcom/ss/android/downloadlib/addownload/compliance/df;

.field final synthetic rg:J


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/compliance/df;JJ)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->q:Lcom/ss/android/downloadlib/addownload/compliance/df;

    iput-wide p2, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->rg:J

    iput-wide p4, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->df:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Ljava/lang/Boolean;)Ljava/lang/Object;
    .locals 4

    .line 158
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 159
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->q:Lcom/ss/android/downloadlib/addownload/compliance/df;

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->rg:J

    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->df:J

    invoke-static {v0, v1, v2, v3}, Lcom/ss/android/downloadlib/addownload/model/df;->rg(JJ)J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg(J)V

    .line 160
    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->df:J

    const-string p1, "lp_app_dialog_try_show"

    invoke-static {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->df(Ljava/lang/String;J)V

    goto :goto_0

    .line 162
    :cond_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->q:Lcom/ss/android/downloadlib/addownload/compliance/df;

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->df:J

    invoke-virtual {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/df;->df(J)V

    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public bridge synthetic rg(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 155
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/compliance/df$1;->rg(Ljava/lang/Boolean;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method
