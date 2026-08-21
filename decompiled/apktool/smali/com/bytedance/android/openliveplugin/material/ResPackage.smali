.class public Lcom/bytedance/android/openliveplugin/material/ResPackage;
.super Ljava/lang/Object;


# instance fields
.field public resUrl:Ljava/lang/String;

.field public statusCode:J

.field public version:J


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public isLegal()Z
    .locals 4

    .line 10
    iget-wide v0, p0, Lcom/bytedance/android/openliveplugin/material/ResPackage;->statusCode:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/material/ResPackage;->resUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method
