.class public Lcom/tkay/core/api/TYAdConst$BIDDING_TYPE;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/api/TYAdConst;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "BIDDING_TYPE"
.end annotation


# static fields
.field public static final BIDDING_LOSS_WITH_BIDDING_TIMEOUT:Ljava/lang/String; = "2"

.field public static final BIDDING_LOSS_WITH_EXPIRE:Ljava/lang/String; = "5"

.field public static final BIDDING_LOSS_WITH_EXPIRE_SIGMOB:Ljava/lang/String; = "2002"

.field public static final BIDDING_LOSS_WITH_LOW_PRICE_IN_HB:Ljava/lang/String; = "102"

.field public static final BIDDING_LOSS_WITH_LOW_PRICE_IN_NORMAL:Ljava/lang/String; = "103"


# instance fields
.field final synthetic this$0:Lcom/tkay/core/api/TYAdConst;


# direct methods
.method public constructor <init>(Lcom/tkay/core/api/TYAdConst;)V
    .locals 0

    .line 26
    iput-object p1, p0, Lcom/tkay/core/api/TYAdConst$BIDDING_TYPE;->this$0:Lcom/tkay/core/api/TYAdConst;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
