.class public final Lcom/mbridge/msdk/mbjscommon/confirmation/a;
.super Ljava/lang/Object;
.source "ConfirmationJsExtra.java"


# instance fields
.field private a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:I


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 13
    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->b:Ljava/lang/String;

    .line 14
    iput-object p3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 18
    iget v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->d:I

    return v0
.end method

.method public final a(I)V
    .locals 0

    .line 22
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->d:I

    return-void
.end method

.method public final b()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->c:Ljava/lang/String;

    return-object v0
.end method
