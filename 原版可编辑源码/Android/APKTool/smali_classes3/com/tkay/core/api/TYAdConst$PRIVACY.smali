.class public Lcom/tkay/core/api/TYAdConst$PRIVACY;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/api/TYAdConst;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "PRIVACY"
.end annotation


# static fields
.field public static final PERSIONALIZED_ALLOW_STATUS:I = 0x1

.field public static final PERSIONALIZED_LIMIT_STATUS:I = 0x2


# instance fields
.field final synthetic this$0:Lcom/tkay/core/api/TYAdConst;


# direct methods
.method public constructor <init>(Lcom/tkay/core/api/TYAdConst;)V
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/tkay/core/api/TYAdConst$PRIVACY;->this$0:Lcom/tkay/core/api/TYAdConst;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
