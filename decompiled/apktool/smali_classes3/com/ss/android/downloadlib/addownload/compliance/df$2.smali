.class Lcom/ss/android/downloadlib/addownload/compliance/df$2;
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
        "Ljava/lang/String;",
        "Ljava/lang/Boolean;",
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

    .line 130
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2;->q:Lcom/ss/android/downloadlib/addownload/compliance/df;

    iput-wide p2, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2;->rg:J

    iput-wide p4, p0, Lcom/ss/android/downloadlib/addownload/compliance/df$2;->df:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Ljava/lang/String;)Ljava/lang/Boolean;
    .locals 6

    const/4 v0, 0x1

    new-array v0, v0, [Z

    const/4 v1, 0x0

    aput-boolean v1, v0, v1

    .line 135
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    .line 138
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->pt()Lcom/ss/android/download/api/config/ux;

    move-result-object v3

    new-instance v4, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;

    invoke-direct {v4, p0, v0}, Lcom/ss/android/downloadlib/addownload/compliance/df$2$1;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/df$2;[Z)V

    const-string v5, "GET"

    invoke-interface {v3, v5, p1, v2, v4}, Lcom/ss/android/download/api/config/ux;->rg(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/ss/android/download/api/config/r;)V

    .line 153
    aget-boolean p1, v0, v1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic rg(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 130
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/addownload/compliance/df$2;->rg(Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method
