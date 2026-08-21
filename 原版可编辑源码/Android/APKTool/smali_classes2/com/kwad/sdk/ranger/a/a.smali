.class public Lcom/kwad/sdk/ranger/a/a;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/ranger/a/a$b;,
        Lcom/kwad/sdk/ranger/a/a$a;
    }
.end annotation


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field public aHa:Ljava/lang/Object;

.field public aHb:Ljava/lang/String;

.field public aHc:Ljava/lang/String;

.field public aHd:Z

.field public aHe:Ljava/lang/String;

.field public aHf:Lcom/kwad/sdk/ranger/a/a$b;

.field public aHg:Lcom/kwad/sdk/ranger/a/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Ranger_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-class v1, Lcom/kwad/sdk/ranger/a/a;

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/ranger/a/a;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final Hu()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHa:Ljava/lang/Object;

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHb:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHc:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHe:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/ranger/a/a$b;->Hu()Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHg:Lcom/kwad/sdk/ranger/a/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/sdk/ranger/a/a;->Hu()Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_1
    const/4 v0, 0x1

    return v0

    :cond_2
    const/4 v0, 0x0

    return v0
.end method
